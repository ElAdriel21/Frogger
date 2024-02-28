#pragma once
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class vehiculo
{
public:

	float velocidad, x, y;

	sf::Texture vehiculoTexture;
	sf::Sprite vehiculoSprite;

	vehiculo()
	{

	}

	void virtual Movimiento()
	{

	}

	void Dibujar(sf::RenderWindow& window)
	{
		window.draw(vehiculoSprite);
	}
};

