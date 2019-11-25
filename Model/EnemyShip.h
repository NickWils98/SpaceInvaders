//
// Created by nick on 18.11.19.
//

#ifndef SPACEINVADERS_ENEMYSHIP_H
#define SPACEINVADERS_ENEMYSHIP_H

#include "Enemy.h"

class EnemyShip : public Enemy {
public:
  explicit EnemyShip(std::vector<float> coord);

  virtual ~EnemyShip();

  const std::vector<float> &getPos() const override;

  void setPos(const std::vector<float> &pos) override;


private:
  std::vector<float> pos;
};

#endif // SPACEINVADERS_ENEMYSHIP_H
