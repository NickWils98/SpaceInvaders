//
// Created by nick on 18.11.19.
//

#ifndef SPACEINVADERS_WORLD_H
#define SPACEINVADERS_WORLD_H

#include "Entity.h"
#include "PlayerTank.h"

class World : public Entity {
public:
  World();

  ~World() override;

  void add(const std::shared_ptr<Entity>& obj);

  void addPlayer();

  std::vector<float> getPos() const;
  void interpretInput(std::vector<bool>);


//  void render();

private:
  std::vector<std::shared_ptr<Entity>> entityList;
  std::shared_ptr<PlayerTank> player;

};

#endif // SPACEINVADERS_WORLD_H
