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

int main() 
{
    int ancho = 40; 
    int alto = 20; 
    int puntaje = 0;
    char tecla; 

    vehiculo* newAutomovil = new automovil();
    vehiculo* newCamioneta = new camioneta();
    vehiculo* newCamion = new camion();

    return 0;
}