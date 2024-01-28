#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

class Apfelbaum {
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    Apfelbaum() {
        texture.loadFromFile("res/textures/apfelbaum.png");
        sprite.setTexture(texture);
        sprite.setScale(0.2f, 0.2f);
        sprite.setPosition(128.f, 16.f);
    }

    sf::Sprite& getSprite() {
        return sprite;
    }

};