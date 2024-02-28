#pragma once
#include "vehiculo.h"
class camioneta : public vehiculo
{
public:

	camioneta(float newx, float newy)
	{
		velocidad = 0.3;
		vehiculoTexture.loadFromFile("vehiculo.png");
		x = newx;
		y = newy;
		vehiculoSprite.setTexture(vehiculoTexture);
	}

	void Movimiento()
	{
		x -= 2;
		vehiculoSprite.setPosition(x, y);
	}
};

