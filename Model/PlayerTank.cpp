//
// Created by nick on 18.11.19.
//

#include "PlayerTank.h"

PlayerTank::PlayerTank() {
  pos.x = 20;
  pos.y = 400;
}

PlayerTank::~PlayerTank() = default;

std::vector<float> PlayerTank::getPos() const { return {pos.x, pos.y}; }

void PlayerTank::goRight() {
    if (pos.x < 450) {
        pos.x += 0.1;
    }
}

void PlayerTank::goLeft() {
    if (pos.x > 0) {
        pos.x -= 0.1;
    }
}
