#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

class Player {
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    Player() {
        texture.loadFromFile("res/Spitzzahn_Hund.png");
        sprite.setTexture(texture);
        sprite.setScale(0.2f,0.2f);
        //sprite.setScale(3.0f, 3.0f);
        sprite.setPosition(100, 100);
    }

    void move(float dx, float dy) {
        sprite.move(dx, dy);
    }

    sf::Sprite& getSprite() {
        return sprite;
    }
};