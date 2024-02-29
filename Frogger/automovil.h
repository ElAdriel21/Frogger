#include <iostream>
#include <conio.h>
#include <windows.h>
#include "vehiculo.h"

class automovil : public vehiculo 
{
public:

    void Movimiento() override 
    {
        x += velocidad;
    }
};

