#include<iostream>
#include<conio.h>
#define T 8

using namespace std;
using namespace System;


#define Ancho_Tablero 8
#define Alto_Tablero 8
#define Ficha_Blanca 'X'
#define Ficha_Negra 'O'
#define LIBRE ' '
#define Ancho_Caracter 3


struct Ficha {
    int posC;
    int posF;
    char direccion;
    char tipo; // (Derecha=D, Izquierda=I)
    char color; //(Reina=R, Dama=D)
};

void Memoria_para_Tablero(char** Tablero, int nColumnas, int nFilas)
{
    for (int f = 0; f < nFilas; f++)
    {
        Tablero[f] = new char[nColumnas];
    }
}

void Inicializar_Tablero(char** Tablero, int nColumnas, int nFilas)
{
    for (int f = 0; f < nFilas; f++)
        for (int c = 0; c < nColumnas; c++)
        {
            Tablero[f][c] = LIBRE; //Espacio para cuadrícula libre 
        }

}

void Inicializar_Fichas(char** Tablero, int nColumnas, int nFilas)
{
    //Fichas Negras
    Tablero[0][1] = Ficha_Negra;
    Tablero[0][3] = Ficha_Negra;
    Tablero[0][5] = Ficha_Negra;
    Tablero[0][7] = Ficha_Negra;
    Tablero[1][0] = Ficha_Negra;
    Tablero[1][2] = Ficha_Negra;
    Tablero[1][4] = Ficha_Negra;
    Tablero[1][6] = Ficha_Negra;
    Tablero[2][1] = Ficha_Negra;
    Tablero[2][3] = Ficha_Negra;
    Tablero[2][5] = Ficha_Negra;
    Tablero[2][7] = Ficha_Negra;
    
    //Fichas Blancas
    Tablero[5][0] = Ficha_Blanca;
    Tablero[5][2] = Ficha_Blanca;
    Tablero[5][4] = Ficha_Blanca;
    Tablero[5][6] = Ficha_Blanca;
    Tablero[6][1] = Ficha_Blanca;
    Tablero[6][3] = Ficha_Blanca;
    Tablero[6][5] = Ficha_Blanca;
    Tablero[6][7] = Ficha_Blanca;
    Tablero[7][0] = Ficha_Blanca;
    Tablero[7][2] = Ficha_Blanca;
    Tablero[7][4] = Ficha_Blanca;
    Tablero[7][6] = Ficha_Blanca;
}

void Liberar_la_memoria_del_Tablero(char** Tablero, int nColumnas, int nFilas)
{
    for (int f = 0; f < nFilas; f++)
    {
        delete[] Tablero[f];
    }
    delete[] Tablero;
}

void Imprimir_Tablero(char** Tablero, int nColumnas, int nFilas)
{
    Console::Clear();

    for (int f = 0; f < nFilas; f++)
    {
        for (int c = 0; c < nColumnas; c++)
        {
            if (f % 2 == 0)
            {
                if (c % 2 == 0)
                {
                    Console::BackgroundColor = ConsoleColor::White;
                }
                else
                {
                    Console::BackgroundColor = ConsoleColor::Black;
                }
            }
            else
            {
                if (c % 2 == 0)
                {
                    Console::BackgroundColor = ConsoleColor::Black;
                }
                else
                {
                    Console::BackgroundColor = ConsoleColor::White;
                }
            }
            // Imprimir los caracteres

            cout.width(Ancho_Caracter);
            if (Tablero[f][c] == Ficha_Blanca)
                Console::ForegroundColor = ConsoleColor::White;
            else
                Console::ForegroundColor = ConsoleColor::Green;
            cout << Tablero[f][c] << "  ";


        }
        cout << endl;

    }

}



void Mostrar_Menu_y_despues_la_opcion()
{
	int opcionJuego;
	string jugador1, jugador2;

	cout << "------------------JUEGO DE DAMAS-----------------" << endl;
	
	cout << "Programadores:" << endl;
	cout << "Lorenzo Navarro Robles" << endl;
	cout << "Bruno Robles Ayala" << endl;
	cout << "Giuliana Sanchez Alvarez" << endl;
	
	//Datos de los participantes
	cout << "Inserte el nombre del primer jugador: "; cin >> jugador1;
	cout << "Inserte el nombre del segundo jugador: "; cin >> jugador2;
	
	//Opción de juego
	cout << "Elija el modo de Juego:" << endl << "1. Jugador1 vs Jugador2" << endl;
	cout << "2. Jugador1 vs CPU" << endl << "3. CPU vs CPU" << endl; cin >> opcionJuego;
	
	switch (opcionJuego)
	{
	case 1: system("cls");
		cout << "opcion 1" << endl;
		break;
	case 2: system("cls");
		cout << "opcion 2"<<endl;
		break;
	case 3: system("cls");
		cout << "opcion 3"<<endl;
		break;
	}
}




int main()
{

	Mostrar_Menu_y_despues_la_opcion();
	
    int nColumnas = Ancho_Tablero; // Cantidad de filas
    int nFilas = Alto_Tablero; // Cantidad de columnas

    char** Tablero;

    Tablero = new char* [nFilas];
    Memoria_para_Tablero(Tablero, nColumnas, nFilas);

    Inicializar_Tablero(Tablero, nColumnas, nFilas);

    Inicializar_Fichas(Tablero, nColumnas, nFilas);

    Imprimir_Tablero(Tablero, nColumnas, nFilas);

    Liberar_la_memoria_del_Tablero(Tablero, nColumnas, nFilas);


	

	_getch();
	return 0;
}
