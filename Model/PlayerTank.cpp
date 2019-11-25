//
// Created by nick on 18.11.19.
//

#include "PlayerTank.h"

PlayerTank::PlayerTank() {
  pos.push_back(20);
  pos.push_back(400);
}

PlayerTank::~PlayerTank() = default;

std::vector<float> PlayerTank::getPos() const { return pos; }

void PlayerTank::goRight() {
  if (pos[0] < 450) {
    pos[0] += 0.1;
  }
}

void PlayerTank::goLeft() {
  if (pos[0] > 0) {
    pos[0] -= 0.1;
  }
}
