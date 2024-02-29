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

    int GetX()
    {
        return(x);
    }

    int GetY()
    {
        return(y);
    }

    void SetX(int newX)
    {
        x = newX;
    }

    void SetY(int newY)
    {
        y = newY;
    }
};
