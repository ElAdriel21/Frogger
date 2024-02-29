#pragma once
#include<iostream>
#include<iostream>
#include<conio.h>
#include<windows.h>
class vehiculo {
protected:
    int x, y;

public:

    vehiculo(int newX = 0, int newY = 0)
    {
        x = newX;
        y = newY;
    }

    virtual void Mostrar() 
    {
        std::cout << "Vehiculo en posicion (" << x << ", " << y << ")" << std::endl;
    }

    virtual void Movimiento()
    {

    }

    void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
};
