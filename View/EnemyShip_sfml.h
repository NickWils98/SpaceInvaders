//
// Created by nick on 25.11.19.
//

#ifndef SPACEINVADERS_ENEMYSHIP_SFML_H
#define SPACEINVADERS_ENEMYSHIP_SFML_H

#include <SFML/Graphics.hpp>
#include <memory>
#include <vector>

class EnemyShip_sfml {
public:
  EnemyShip_sfml(sf::RenderWindow &w, const std::shared_ptr<sf::Texture> &tex);

  virtual ~EnemyShip_sfml();

  void render();

  void update(std::vector<float>);

private:
  sf::RectangleShape body;
  sf::RenderWindow &window;
};

#endif // SPACEINVADERS_ENEMYSHIP_SFML_H
