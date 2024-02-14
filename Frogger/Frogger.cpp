#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 600), "Frogger");

    sf::Texture redPointTexture;
    redPointTexture.loadFromFile("rana.png");

    sf::Sprite objeto(redPointTexture);

    int x = 250, y = 250;

    while (window.isOpen()) {
        sf::Event event;

        objeto.setPosition(250, 250);

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed) {

                if (event.key.code == sf::Keyboard::A) {
                    if (x > 0) {
                        x -= 2;
                    }
                }

                if (event.key.code == sf::Keyboard::S) {
                    if (y < 600 - 128) {
                        y += 2;
                    }
                }

                if (event.key.code == sf::Keyboard::D) {
                    if (x < 1024 - 128) {
                        x += 2;
                    }
                }

                if (event.key.code == sf::Keyboard::W) {
                    if (y > 0) {
                        y -= 2;
                    }
                }
            }


        }

        window.clear();

        objeto.setPosition(x, y);
        window.draw(objeto);

        window.display();
    }
}