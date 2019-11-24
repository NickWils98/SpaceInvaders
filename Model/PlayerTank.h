//
// Created by nick on 18.11.19.
//

#ifndef SPACEINVADERS_PLAYERTANK_H
#define SPACEINVADERS_PLAYERTANK_H

#include <vector>

class PlayerTank {
public:
  PlayerTank();

  virtual ~PlayerTank();

  void movePlayer(std::vector<bool>);

  std::vector<float> getPos() const;

private:
  struct coordinats {
    float x = 0;
    float y = 0;
  };
  coordinats pos;
};

#endif // SPACEINVADERS_PLAYERTANK_H
