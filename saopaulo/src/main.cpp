#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <stdio.h>

#include "player.cpp"
#include "background.cpp"

// constants
const int WINDOW_WIDTH = 1024;
const int WINDOW_HEIGHT = 512;
const int FRAMERATE_LIMIT = 32;


class SaoPaulo3233 {
private:
    Player player;
    Background background;

public:
    // attributes
    sf::RenderWindow window;
    
    // method
    void init() {
        window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "sars");
        window.setFramerateLimit(FRAMERATE_LIMIT);
    }

    // method
    void input() {
        float speed = 16.0f;

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            player.move(0, -speed);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            player.move(0, speed);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            player.move(-speed, 0);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            player.move(speed, 0);
        }

        // close window?
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed)
                window.close();    
        }
    }

    // method
    void update() {
        //move();
        //collision_detection();
        //play_sound();
    }

    // method
    void draw() {
        window.clear(sf::Color::Black);
        window.draw(background.getSprite());
        window.draw(player.getSprite());
    }

    // method
    void display() {
        window.display();
    }   
};


int main() {
    SaoPaulo3233 game;
    game.init();
    while(game.window.isOpen()) {
        game.input();
        game.update();
        game.draw();
        game.display();
    }
    return 0;
}