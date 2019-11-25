//
// Created by nick on 18.11.19.
//

#ifndef SPACEINVADERS_PLAYERTANK_H
#define SPACEINVADERS_PLAYERTANK_H

#include "Entity.h"
#include <vector>

class PlayerTank : public Entity {
public:
  PlayerTank();

  ~PlayerTank() override;

  std::vector<float> getPos() const;

  void goLeft();

  void goRight();

private:
  std::vector<float> pos;
};

#endif // SPACEINVADERS_PLAYERTANK_H
