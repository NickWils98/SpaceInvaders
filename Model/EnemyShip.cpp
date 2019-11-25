//
// Created by nick on 18.11.19.
//

#include "EnemyShip.h"

EnemyShip::EnemyShip(std::vector<float> coord) {
  pos.push_back(coord[0]);
  pos.push_back(coord[1]);
}

EnemyShip::~EnemyShip() = default;

const std::vector<float> &EnemyShip::getPos() const { return pos; }
