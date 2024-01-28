#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

class Background {
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    Background() {
        texture.loadFromFile("res/ground.png");
        texture.setRepeated(true);
        sprite.setTexture(texture);
        sprite.setTextureRect(sf::IntRect(0, 0, 1080, 720));
        sprite.setScale(20.0f, 20.0f);
    }

    sf::Sprite& getSprite() {
        return sprite;
    }
};