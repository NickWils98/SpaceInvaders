//
// Created by nick on 17.11.19.
//

#ifndef SPACEINVADERS_GAME_SFML_H
#define SPACEINVADERS_GAME_SFML_H

#include "PlayerTank_sfml.h"
#include <SFML/Graphics.hpp>
#include <memory>

class Game_sfml {
  // protected:
  //    struct coordinates{
  //        int x;
  //        int y;
  //    };
public:
  Game_sfml();

  virtual ~Game_sfml();

  void handleEvent();

  void run();

  bool isWindowOpen();

  void render();

  void createPlayer(std::vector<float>);

  void update(std::vector<float>);

  static std::vector<bool> getInput();

private:
  sf::RenderWindow m_window;
  std::vector<std::shared_ptr<sf::Texture>> textures = {};
  std::shared_ptr<PlayerTank_sfml> player;
};

#endif // SPACEINVADERS_GAME_SFML_H
