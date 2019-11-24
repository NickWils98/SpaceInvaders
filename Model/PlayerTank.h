//
// Created by nick on 18.11.19.
//

#ifndef SPACEINVADERS_PLAYERTANK_H
#define SPACEINVADERS_PLAYERTANK_H

#include <vector>
#include "Entity.h"

class PlayerTank : public Entity {
public:
  PlayerTank();

  virtual ~PlayerTank();

  std::vector<float> getPos() const;

  void goLeft();

  void goRight();

private:
  struct coordinats {
    float x = 0;
    float y = 0;
  };
  coordinats pos;
};

#endif // SPACEINVADERS_PLAYERTANK_H
