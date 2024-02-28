#pragma once
#include "vehiculo.h"
class camion : public vehiculo
{
public:

	camion(float newx, float newy)
	{
		velocidad = 0.1;
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

