//
// Created by nick on 17.11.19.
//

#include "Game_sfml.h"
using namespace sf;
Game_sfml::Game_sfml()
        : m_window(VideoMode(514, 431), "Space Invaders", Style::Close | Style::Resize),
        view(m_window.getDefaultView()){

}

Game_sfml::~Game_sfml() {
    m_window.close();
}

void Game_sfml::run() {

}

bool Game_sfml::isWindowOpen() {
    return m_window.isOpen();
}
