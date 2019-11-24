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

void World::addPlayer() {
    player = std::make_shared<PlayerTank>();
    entityList.push_back(player);
    std::cout << entityList.size();
}

std::vector<float> World::getPos() const {
    return player->getPos();
}

void World::interpretInput(std::vector<bool> inp) {
    if (inp[0] and !inp[1]) {
        player->goLeft();
    } else if (!inp[0] and inp[1]) {
        player->goRight();
    }
}
