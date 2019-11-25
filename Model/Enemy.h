//
// Created by nick on 25.11.19.
//

#ifndef SPACEINVADERS_ENEMY_H
#define SPACEINVADERS_ENEMY_H


#include "Entity.h"


class Enemy : public Entity {
public:
    Enemy();

    ~Enemy() ;

    virtual const std::vector<float> &getPos() const=0;

    virtual void setPos(const std::vector<float> &pos)=0;


};


#endif //SPACEINVADERS_ENEMY_H
