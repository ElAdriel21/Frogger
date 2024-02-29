#pragma once
#include "vehiculo.h"

class camioneta : public vehiculo {
public:

    camioneta(int newX, int newY)
    {
        x = newX;
        y = newY;
    }

    void Movimiento() override {

        x -= 1;
        Mostrar();
    }

    void Mostrar() override
    {
        gotoxy(x, y);
        std::cout << "ooo";
    }
};