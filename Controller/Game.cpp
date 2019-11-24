//
// Created by nick on 17.11.19.
//

#include "Game.h"

Game::Game() {
  // make world logic
  gameSfml = std::make_shared<Game_sfml>();
  Game_open = gameSfml->isWindowOpen();
  world = std::make_shared<World>();
}

Game::~Game() = default;

void Game::run() {
  init();
  while (Game_open) {
    Game_open = gameSfml->isWindowOpen();
    input = gameSfml->getInput();
    world->interpretInput(input);
    std::vector<float> newCoordinates = world->getPos();
    gameSfml->update(newCoordinates);
    gameSfml->render();
    gameSfml->run();
  }
}

void Game::init() {
    world->addPlayer();
    std::vector<float> pos = world->getPos();
    gameSfml->createPlayer(pos);
}

void Game::moveObjects() {}
