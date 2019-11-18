//
// Created by nick on 17.11.19.
//

#include "Game.h"

Game::Game() {
// make world logic
 gameSfml = std::make_shared<Game_sfml>();
 Game_open = gameSfml->isWindowOpen();
}

Game::~Game() {

}

void Game::run() {
    while(Game_open){
        Game_open = gameSfml->isWindowOpen();

    }
}

void Game::init() {

}
