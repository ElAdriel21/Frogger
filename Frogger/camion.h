#include <iostream>
#include <conio.h>
#include <windows.h>
#include "vehiculo.h"

class camion : public vehiculo 
{
public:

    void Movimiento() override 
    {
        x += velocidad * 2;
    }
};

