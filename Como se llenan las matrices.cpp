#include <iostream>
#include <stdlib.h>
#include <windows.h> 

using namespace std;

//Esta funcion sirve para poder cambiar de posicion el puntero
// recibe dos parametros la coordenada X y la Y 
void gotoxy(int x , int y){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
	
}

int main(){
	system("cls");
	//esto permitira cambiar el color de las palabras 
	printf("\033[0;32m");
	//Creamos la matriz de 50 elementos
	int matriz[5][10];
	int numero=1; 
	
	//imprimiendo una matriz vacia para que se vea como una animacion
	
	for(int i=0;i<5;i++){
		for(int j=0;j<10;j++){
			cout<<"[  ]";
			Sleep(100);
		}
		cout<<endl;
	}
	//asignandole los valores  a la matriz
	for(int i=0;i<5;i++){
		for(int j=0;j<10;j++){
			matriz[i][j]=numero;
			numero++;
		}
	}
	
	//Nos ubicamos en la primera posicion
	gotoxy(0,0);	
	
	//y sobreescribimos la matriz los valores de la matriz que acabamos de llenar
	for(int i=0;i<5;i++){
		for(int j=0;j<10;j++){
			if(matriz[i][j]<10){
				cout<<"[0"<<matriz[i][j]<<"]";
				Sleep(200);
			}else{
			cout<<"["<<matriz[i][j]<<"]";
			Sleep(200);}
		}
		cout<<endl;
	}
	cout<<endl;
	printf("\033[0;37m");
	cout<<endl;
	system("pause");
	return 0;
}
