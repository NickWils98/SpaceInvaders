//
// Created by nick on 25.11.19.
//

#include "EnemyControl.h"

EnemyControl::EnemyControl() {
    posx=0;
    posy=0;

}

EnemyControl::~EnemyControl() {

}


void EnemyControl::newpos() {
    std::vector<float> vec;
    if(posx+40<440){
        posx+=40;
    }else{
        posx=0;
        posy+=40;
    }
}

std::vector<float> EnemyControl::add() {
    std::vector<float> vec = {posx, posy};
    std::shared_ptr<Enemy> enemy = std::make_shared<EnemyShip>(vec);
    newpos();
    list.push_back(enemy);
    return vec;
}

void EnemyControl::move() {
    for(const auto& enemy : list){
        if(right){
            if(enemy->getPos()[0]>450){
                right = false;
                break;
            }
        } else{
            if(enemy->getPos()[0]<=0){
                right = true;
                break;
            }
        }
    }
    if (right) {
        moveRight();
    } else {
        moveLeft();
    }

}

void EnemyControl::moveRight() {
    std::vector<float> pos;
    for (const std::shared_ptr<Enemy>& enemy : list) {
        pos = enemy->getPos();
        pos[0]+=0.01;
        enemy->setPos(pos);
    }
}
void EnemyControl::moveLeft() {
    std::vector<float> pos;
    for (const std::shared_ptr<Enemy>& enemy : list) {
        pos = enemy->getPos();
        pos[0]-=0.01;
        enemy->setPos(pos);
    }
}

std::vector<std::vector<float>> EnemyControl::getCoordinates() {
    std::vector<std::vector<float>> elist;
    for(auto enemy: list){
        elist.push_back(enemy->getPos());
    }
    return elist;
}
