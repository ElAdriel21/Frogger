#pragma once
#include<iostream>

class vehiculo {
protected:
    int x, y;
    int velocidad; 

public:

    vehiculo(int newX = 0, int newY = 0, int newVelocidad = 1)
    {
        x = newX;
        y = newY;
        velocidad = newVelocidad;
    }

    virtual void Mostrar() 
    {
        std::cout << "Vehiculo en posicion (" << x << ", " << y << ")" << std::endl;
    }

    virtual void Movimiento()
    {

    }
};
