//
// Created by nick on 20.11.19.
//

#include "PlayerTank_sfml.h"

PlayerTank_sfml::PlayerTank_sfml(sf::RenderWindow &w,
                                 const std::shared_ptr<sf::Texture> &tex)
    : window(w) {
  body.setTexture(tex.get());
  body.setSize(sf::Vector2f(50, 25));
}

PlayerTank_sfml::~PlayerTank_sfml() = default;

void PlayerTank_sfml::render() { window.draw(body); }

void PlayerTank_sfml::update(std::vector<float> pos) {
  body.setPosition(pos[0], pos[1]);
}

// void PlayerTank_sfml::update() {
//    body.setPosition(position.x, position.y);
//}