//
// Created by nick on 18.11.19.
//

#ifndef SPACEINVADERS_WORLD_H
#define SPACEINVADERS_WORLD_H

#include "EnemyShip.h"
#include "Entity.h"
#include "PlayerTank.h"
#include <cmath>

class World : public Entity {
public:
  World();

  ~World() override;

  void add(const std::shared_ptr<Entity> &obj);

  std::vector<float> addPlayer();

  std::vector<std::vector<float>> addEnemys(int);

  std::vector<float> getPlayerPos() const;

  std::vector<std::vector<float>> getEnemyPos() const;

  void interpretInput(std::vector<bool>);

  //  void render();

private:
  std::vector<std::shared_ptr<Entity>> entityList;
  std::shared_ptr<PlayerTank> player;
  std::vector<std::shared_ptr<EnemyShip>> Enemylist;
};

#endif // SPACEINVADERS_WORLD_H
