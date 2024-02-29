#pragma once
#include "vehiculo.h"

class camion : public vehiculo {
public:

    camion()
    {

    }

    void Movimiento() override {

        x += velocidad * 2;
    }
};

