//
// Created by nick on 17.11.19.
//

#include "Game.h"

Game::Game() {
  // make world logic
  gameSfml = std::make_shared<Game_sfml>();
  Game_open = gameSfml->isWindowOpen();
}

Game::~Game() = default;

void Game::run() {
  init();
  while (Game_open) {
    Game_open = gameSfml->isWindowOpen();
    input = gameSfml->getInput();
    player->movePlayer(input);
    std::vector<float> newCoordinates = player->getPos();
    gameSfml->update(newCoordinates);
    gameSfml->render();
    gameSfml->run();
  }
}

void Game::init() {
  player = std::make_shared<PlayerTank>();
  std::vector<float> pos = player->getPos();
  gameSfml->createPlayer(pos);
}

void Game::moveObjects() {}
