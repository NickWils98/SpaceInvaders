//
// Created by nick on 17.11.19.
//

#ifndef SPACEINVADERS_GAME_SFML_H
#define SPACEINVADERS_GAME_SFML_H

#include <SFML/Graphics.hpp>


class Game_sfml {
public:
    Game_sfml();

    virtual ~Game_sfml();

    void run();

    bool isWindowOpen();


private:
    sf::RenderWindow m_window;
    sf::View view;

};


#endif //SPACEINVADERS_GAME_SFML_H
