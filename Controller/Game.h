//
// Created by nick on 17.11.19.
//

#ifndef SPACEINVADERS_GAME_H
#define SPACEINVADERS_GAME_H

#include "../Model/Entity.h"
#include "../View/Game_sfml.h"
#include "../Model/World.h"
#include <iostream>
#include <memory>

class Game {
public:
  Game();

  virtual ~Game();

  void run();

  void init();

  static void moveObjects();

private:
  bool Game_open = false;

  std::shared_ptr<Game_sfml> gameSfml;
  std::vector<bool> input = {};
  std::shared_ptr<World> world;

};

#endif // SPACEINVADERS_GAME_H
