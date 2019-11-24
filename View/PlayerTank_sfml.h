//
// Created by nick on 20.11.19.
//

#ifndef SPACEINVADERS_PLAYERTANK_SFML_H
#define SPACEINVADERS_PLAYERTANK_SFML_H

#include <SFML/Graphics.hpp>
#include <memory>

class PlayerTank_sfml {
public:
  PlayerTank_sfml(sf::RenderWindow &w, const std::shared_ptr<sf::Texture> &tex);

  virtual ~PlayerTank_sfml();

  void render();

  void update(std::vector<float>);

private:
  sf::RectangleShape body;
  sf::RenderWindow &window;
};

#endif // SPACEINVADERS_PLAYERTANK_SFML_H
