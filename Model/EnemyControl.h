//
// Created by nick on 25.11.19.
//

#ifndef SPACEINVADERS_ENEMYCONTROL_H
#define SPACEINVADERS_ENEMYCONTROL_H


#include "Entity.h"
#include "Enemy.h"
#include "EnemyShip.h"

#include <cmath>


class EnemyControl : Entity {
public:
    EnemyControl();

    virtual ~EnemyControl();

    void newpos();

    std::vector<float> add();

    void move();

    std::vector<std::vector<float>> getCoordinates();

private:
    float posx;
    float posy;
    std::vector<std::shared_ptr<Enemy>> list;
    bool right;
    void moveRight();
    void moveLeft();

};


#endif //SPACEINVADERS_ENEMYCONTROL_H
