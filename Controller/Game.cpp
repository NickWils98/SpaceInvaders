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
    std::vector<std::vector<float>>coordinates;
  init();
  while (Game_open) {
    Game_open = gameSfml->isWindowOpen();
    input = gameSfml->getInput();
    world->interpretInput(input);
    world->moveEnemys();
    coordinates = world->getEnemyPos();
    coordinates.push_back(world->getPlayerPos());
    gameSfml->update(coordinates);
    gameSfml->render();
    gameSfml->run();
  }
}

void Game::init() {
    int tll = 33;
  std::vector<float> pos;
  pos = world->addPlayer();
  gameSfml->createPlayer(pos);
  std::vector<std::vector<float>> posEnemy;
  posEnemy = world->addEnemys(tll);
  gameSfml->addEnemy(tll, posEnemy);
}

void Game::moveObjects() {}
