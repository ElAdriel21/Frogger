#pragma once
#include "vehiculo.h"
class automovil : public vehiculo
{
public:

	automovil(float newx, float newy)
	{
		velocidad = 0.5;
		vehiculoTexture.loadFromFile("vehiculo.png");
		x = newx;
		y = newy;
		vehiculoSprite.setTexture(vehiculoTexture);
		vehiculoSprite.setScale(0.2f, 0.2f);
	}

	void Movimiento() override
	{
		x -= 0.01;
		vehiculoSprite.setPosition(x, y);
	}
};

