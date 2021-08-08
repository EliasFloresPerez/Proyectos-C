#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;

//Gotoxi
void gotoxy(int x , int y){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
	
}
//Funciones
void pintar();
void pintar_fichas();
void movimiento(int,int,int,int);
void turno();
void juego(char*,char*);
void fin_de_juego();

//Variables Globales
int Contador_blancas = 0;
int Contador_negras = 0;
int endgame=0;
//Matriz principal
int matriz_de_juego[8][8]={{0,1,0,1,0,1,0,1},
							{1,0,1,0,1,0,1,0},
							 {0,1,0,1,0,1,0,1},
							 {1,0,1,0,1,0,1,0},
							 {0,1,0,1,0,1,0,1},
							 {1,0,1,0,1,0,1,0},
							 {0,1,0,1,0,1,0,1},
							 {1,0,1,0,1,0,1,0}};

//matriz de fichas							 
int matriz_de_juego_B[8][8]={{0,1,0,1,0,1,0,1},
							  {1,0,1,0,1,0,1,0},
							  {0,1,0,1,0,1,0,1},
							  {0,0,0,0,0,0,0,0},
							  {0,0,0,0,0,0,0,0},
							  {2,0,2,0,2,0,2,0},
							  {0,2,0,2,0,2,0,2},
							  {2,0,2,0,2,0,2,0}};
	


int main(){
	system("cls");
	char jugador_1[60];
	char jugador_2[60];
	
	cout<<".:Nombre del jugador #1: ";
	cin>>jugador_1;
	cout<<".:Nombre del jugador #2: ";
	cin>>jugador_2;
	
	
	juego(jugador_1,jugador_2);
	cout<<endl;
	system("pause");
	return 0;
}


void juego(char *jugador_1,char *jugador_2){
	pintar();
	
	int turno = 0;
	
	while(endgame==0){
		int x_ficha=0;
		int y_ficha=0;
		int x_m=0;
		int y_m=0;
		
		system("cls");
		pintar_fichas();
		
		cout<<"\nJugador#1 :"<<jugador_1;
		cout<<"\nJugador#2 :"<<jugador_2<<endl;
		
		cout<<"Le toca a";
		if(turno%2==0){
			cout<<jugador_1;
		}else{
			cout<<jugador_2;
		}
		cout<<" dar su movimiento:\n";
		
		//Pedir datos
		
		cout<<"\nCual fichas desea mover eliga la coordenada:";
		cout<<"\nCoordenada fila:"; cin>>y_ficha;
		cout<<"\nCoordenada comluna:"; cin>>x_ficha;
		
		cout<<"\nDonde la deseas mover?:";
		cout<<"\nCoordenada fila:"; cin>>y_m;
		cout<<"\nCoordenada columna:"; cin>>x_m;
		movimiento(x_ficha,y_ficha,x_m,y_m);
		
		turno = turno+1;
		fin_de_juego();
		cout<<endl;
		system("pause");
		
	}
}
void pintar(){
	system("cls");

	for(int filas = 0; filas<8;filas++){
		cout<<endl;
		for(int columnas = 0;columnas <8;columnas++){

			if(matriz_de_juego[filas][columnas]==0){
				printf("\033[0;38m");
                cout<<"ллллллл";
			}else{
				printf("\033[0;30m");
                cout<<"ллллллл";
			}
		}
	}

}
void pintar_fichas()
{
	gotoxy(0,0);						  
	for(int filas = 0; filas<8;filas++)
	{
		cout<<endl;
		for(int columnas = 0;columnas <8;columnas++)
		{
			if(matriz_de_juego_B[filas][columnas]==2)
		{
			
				if(matriz_de_juego[filas][columnas]==0){
					printf("\033[0;38m");
	                cout<<"ллл";
	                printf("\033[0;34m");
	                cout<<"X";
	                printf("\033[0;38m");
	                cout<<"ллл";
				}else
				{
					if(matriz_de_juego[filas][columnas]==1)
					{
						printf("\033[0;30m");
		                cout<<"ллл";
		                printf("\033[0;34m");
		                cout<<"X";
		                printf("\033[0;30m");
		                cout<<"ллл";
	           		}
				}
		}else
		{
			if(matriz_de_juego_B[filas][columnas]==1)
			{
			
				if(matriz_de_juego[filas][columnas]==0){
					printf("\033[0;38m");
	                cout<<"ллл";
	                printf("\033[0;31m");
	                cout<<"0";
	                printf("\033[0;38m");
	                cout<<"ллл";
				}else
				{
					if(matriz_de_juego[filas][columnas]==1)
					{
						printf("\033[0;30m");
		                cout<<"ллл";
		                printf("\033[0;31m");
		                cout<<"0";
		                printf("\033[0;30m");
		                cout<<"ллл";
	           		}
	           }
			}else
			{
				if(matriz_de_juego[filas][columnas]==0){
					printf("\033[0;38m");
	                cout<<"ллллллл";
				}else{
					printf("\033[0;30m");
	                cout<<"ллллллл";
				}
			}
		}
	}

	}
}

void movimiento(int x,int y,int x_m,int y_m){

	 matriz_de_juego_B[x_m][y_m]=matriz_de_juego_B[x][y];
	 matriz_de_juego_B[x][y]=0;
	 
}

void comer(){
	
}

void fin_de_juego(){
	int jugador_1 = 0;
	int jugador_2 = 0;
	
	for(int f=0;f<8;f++){
		for(int c=0;c<8;c++){
			if(matriz_de_juego_B[f][c]==1){
				jugador_1++;
			if(matriz_de_juego_B[f][c]==2){
				jugador_2++;
				}
			}
		}
	}
	if(jugador_1==0){
		cout<<"El jugador#2 es el ganador";
		endgame=1;
	if(jugador_2==0){
		cout<<"El jugador#1 es el ganador";
		endgame=1;
	}
	}
}
	
	
	










