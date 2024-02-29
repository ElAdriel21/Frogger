#pragma once
#include "vehiculo.h"

class automovil : public vehiculo {
public:

    automovil()
    {

    }

    void Movimiento() override {

        x -= velocidad;
    }
};

