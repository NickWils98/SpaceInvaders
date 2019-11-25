//
// Created by nick on 17.11.19.
//

#include "Game_sfml.h"

#include <utility>

using namespace sf;
Game_sfml::Game_sfml()
    : m_window(VideoMode(514, 431), "Space Invaders",
               Style::Close | Style::Resize) {}

Game_sfml::~Game_sfml() { m_window.close(); }

void Game_sfml::handleEvent() {
  Event evnt{};

  while (m_window.pollEvent(evnt)) {
    switch (evnt.type) {
    case sf::Event::Closed:
      m_window.close();
      break;
    case sf::Event::Resized:
      break;
    default:
      break;
    }
  }
}

void Game_sfml::run() {
  render();
  handleEvent();
}

bool Game_sfml::isWindowOpen() { return m_window.isOpen(); }

void Game_sfml::render() {
  m_window.clear();
  player->render();
  for (const auto &enemy : Enemylist) {
    enemy->render();
  }
  m_window.display();
}

std::vector<bool> Game_sfml::getInput() {
  std::vector<bool> input = {};

  input.push_back(sf::Keyboard::isKeyPressed(sf::Keyboard::Left));
  input.push_back(sf::Keyboard::isKeyPressed(sf::Keyboard::Right));
  input.push_back(sf::Keyboard::isKeyPressed(sf::Keyboard::Space));
  return input;
}

void Game_sfml::createPlayer(std::vector<float> pos) {
  std::shared_ptr<sf::Texture> tex = std::make_shared<sf::Texture>();
  tex->loadFromFile("./../resc/Tank.png");
  textures.push_back(tex);

  player = std::make_shared<PlayerTank_sfml>(m_window, tex);
  player->update(std::move(pos));
}

void Game_sfml::update(std::vector<float> pos) {
  player->update(std::move(pos));
}

void Game_sfml::addEnemy(int num, std::vector<std::vector<float>> pos) {
  std::shared_ptr<sf::Texture> tex = std::make_shared<sf::Texture>();
  tex->loadFromFile("./../resc/Spaceship1.png");
  textures.push_back(tex);
  for (int i = 0; i < num; ++i) {
    Enemylist.push_back(std::make_shared<EnemyShip_sfml>(m_window, tex));
    Enemylist.back()->update(pos[i]);
  }
}
