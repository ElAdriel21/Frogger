#include<iostream>
#include<conio.h>
#include<windows.h>
#include "vehiculo.h"
#include "automovil.h"
#include "camioneta.h"
#include "camion.h"

void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class Rana {
private:
    int x, y;
    int limiteIzquierdo, limiteDerecho, limiteSuperior, limiteInferior;

public:

    Rana(int newX, int newY, int ancho, int alto)
    {
        x = newX;
        y = newY;
        limiteIzquierdo = 1;
        limiteDerecho = ancho - 1;
        limiteSuperior = 1;
        limiteInferior = alto - 1;
    }

    void Mostrar()
    {
        gotoxy(x, y);
        std::cout << "O";
    }

    void Mover(char tecla)
    {
        switch (tecla) {
        case 'a':
            if (x > limiteIzquierdo)
                x--;
            break;
        case 'd':
            if (x < limiteDerecho)
                x++;
            break;
        case 'w':
            if (y > limiteSuperior)
                y--;
            break;
        case 's':
            if (y < limiteInferior)
                y++;
            break;
        }
    }

    int GetY()
    {
        return(y);
    }

    int GetX()
    {
        return(x);
    }
};

int main()
{
    int ancho = 40;
    int alto = 20;
    int puntaje = 0;
    char tecla;

    vehiculo* newAutomovil = new automovil(-2, 5);
    vehiculo* newCamioneta = new camioneta(42, 10);
    vehiculo* newCamion = new camion(-2, 15);

    Rana rana(ancho / 2, alto - 2, ancho, alto);

    while (true)
    {
        if (_kbhit()) {
            tecla = _getch();
            rana.Mover(tecla);
        }

        newAutomovil->Movimiento();
        newCamioneta->Movimiento();
        newCamion->Movimiento();

        if (newAutomovil->GetX() > ancho + 2)
        {
            newAutomovil->SetX(-2);
        }
        if (newCamioneta->GetX() < -2)
        {
            newCamioneta->SetX(42);
        }
        if (newCamion->GetX() > ancho + 2)
        {
            newCamion->SetX(-2);
        }

        system("cls");
        for (int i = 0; i < ancho; i++)
        {
            gotoxy(i, 0);
            std::cout << "-";
            gotoxy(i, alto);
            std::cout << "-";
        }
        for (int i = 1; i < alto; i++)
        {
            gotoxy(0, i);
            std::cout << "|";
            gotoxy(ancho, i);
            std::cout << "|";
        }

        rana.Mostrar();
        newAutomovil->Mostrar();
        newCamioneta->Mostrar();
        newCamion->Mostrar();

        Sleep(100);
    }

    delete newAutomovil;
    delete newCamioneta;
    delete newCamion;

    return 0;
}