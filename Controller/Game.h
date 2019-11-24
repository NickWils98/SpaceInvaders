//
// Created by nick on 17.11.19.
//

#ifndef SPACEINVADERS_GAME_H
#define SPACEINVADERS_GAME_H

#include "../Model/Entity.h"
#include "../Model/PlayerTank.h"
#include "../View/Game_sfml.h"
#include "../View/PlayerTank_sfml.h"
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
  std::shared_ptr<PlayerTank> player;
  std::vector<bool> input = {};
};

#endif // SPACEINVADERS_GAME_H
