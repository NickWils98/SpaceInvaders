//
// Created by nick on 18.11.19.
//

#ifndef SPACEINVADERS_WORLD_H
#define SPACEINVADERS_WORLD_H


#include "Entity.h"

class World : Entity {
public:
    World();

    ~World() override ;

private:
    std::vector<std::shared_ptr<Entity>> entityList;

};


#endif //SPACEINVADERS_WORLD_H
