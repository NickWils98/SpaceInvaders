//
// Created by nick on 18.11.19.
//

#include "World.h"

World::World() {
    entityList = {};
    enemy = std::make_shared<EnemyControl>();
}

World::~World() = default;

void World::add(const std::shared_ptr<Entity> &obj) {
  entityList.push_back(obj);
  std::cout << entityList.size();
}

std::vector<float> World::addPlayer() {
  player = std::make_shared<PlayerTank>();
  entityList.push_back(player);
  std::cout << entityList.size();
  return player->getPos();
}

std::vector<float> World::getPlayerPos() const { return player->getPos(); }

void World::interpretInput(std::vector<bool> inp) {
  if (inp[0] and !inp[1]) {
    player->goLeft();
  } else if (!inp[0] and inp[1]) {
    player->goRight();
  }
}

std::vector<std::vector<float>> World::addEnemys(int num) {
  std::vector<std::vector<float>> list;
  for (int i = 0; i < num; ++i) {
    std::vector<float> coord = enemy->add();
    list.push_back(coord);
  }
  return list;
}

void World::moveEnemys() {
    enemy->move();
}

std::vector<std::vector<float>> World::getEnemyPos() const {
  std::vector<std::vector<float>> list = enemy->getCoordinates();

  return list;
}
