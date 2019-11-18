//
// Created by nick on 17.11.19.
//

#ifndef SPACEINVADERS_GAME_H
#define SPACEINVADERS_GAME_H

#include "../View/Game_sfml.h"
#include <iostream>
#include <memory>


class Game {
public:
    Game();

    virtual ~Game();

    void run();

    void init();

private:
    bool Game_open = false;

    std::shared_ptr<Game_sfml> gameSfml;
};


#endif //SPACEINVADERS_GAME_H
