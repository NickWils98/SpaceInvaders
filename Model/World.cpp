//
// Created by nick on 18.11.19.
//

#include "World.h"

World::World() { entityList = {}; }

World::~World() = default;

void World::add(const std::shared_ptr<Entity>& obj) {
  entityList.push_back(obj);
  std::cout << entityList.size();
}