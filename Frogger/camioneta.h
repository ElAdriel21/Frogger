#pragma once
#include "vehiculo.h"

class camioneta : public vehiculo {
public:

    camioneta()
    {

    }

    void Movimiento() override {

        x -= velocidad;
    }
};