#pragma once
#include "vehiculo.h"
class automovil : public vehiculo
{
public:

	automovil(float newx, float newy)
	{
		this->velocidad = 0.5;
		this->vehiculoTexture.loadFromFile("automovil.png");
		this->x = newx;
		this->y = newy;
	}

	float Movimiento()
	{
		x -= 2;
		return (x);
	}
};

