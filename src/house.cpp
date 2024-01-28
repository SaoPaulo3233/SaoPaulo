#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

class House {
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    House() {
        texture.loadFromFile("res/Haus.png");
        sprite.setTexture(texture);
        sprite.setScale(0.2f, 0.2f);
    }

    sf::Sprite& getSprite() {
        return sprite;
    }

};