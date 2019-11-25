//
// Created by nick on 18.11.19.
//

#ifndef SPACEINVADERS_ENEMYSHIP_H
#define SPACEINVADERS_ENEMYSHIP_H

#include <memory>
#include <vector>
class EnemyShip {
public:
  EnemyShip() = default;
  explicit EnemyShip(std::vector<float> coord);

  virtual ~EnemyShip();

  const std::vector<float> &getPos() const;

private:
  std::vector<float> pos;
};

#endif // SPACEINVADERS_ENEMYSHIP_H
