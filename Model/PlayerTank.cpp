//
// Created by nick on 18.11.19.
//

#include "PlayerTank.h"

PlayerTank::PlayerTank() {
  pos.x = 20;
  pos.y = 400;
}

PlayerTank::~PlayerTank() = default;

void PlayerTank::movePlayer(std::vector<bool> inp) {
  if (pos.x < 450) {
    if (!inp[0] and inp[1]) {
      pos.x += 0.1;
    }
  }
  if (pos.x > 0) {
    if (inp[0] and !inp[1]) {
      pos.x -= 0.1;
    }
  }
}

std::vector<float> PlayerTank::getPos() const { return {pos.x, pos.y}; }
