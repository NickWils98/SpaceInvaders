//
// Created by nick on 25.11.19.
//

#include "EnemyShip_sfml.h"

EnemyShip_sfml::EnemyShip_sfml(sf::RenderWindow &w,
                               const std::shared_ptr<sf::Texture> &tex)
    : window(w) {
  body.setTexture(tex.get());
  body.setSize(sf::Vector2f(50, 25));
  sf::Vector2u texSize = tex->getSize();
  texSize.y /= 2;
  body.setTextureRect(sf::IntRect(0, 0, texSize.x, texSize.y));
}

EnemyShip_sfml::~EnemyShip_sfml() = default;

void EnemyShip_sfml::render() { window.draw(body); }

void EnemyShip_sfml::update(std::vector<float> pos) {
  body.setPosition(pos[0], pos[1]);
}
