#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void gotoxy(int x , int y){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
	
}
void pintarmarco(int,int,int,int,int);

int main(){
	int marco;
	cout<<"\n\t\t\t\tCual marco deseas ? 1 ,2 o 3  ---> ";
	cin>>marco;
	system("cls");
	pintarmarco(45,4,40,20,marco);
	
	return 0;
}

void pintarmarco(int x,int y,int q , int z,int forma){
	//Eligiendo la forma
	int arriba=45, izquierda=221;
	switch(forma){
		case 1:
			arriba = 45;
			izquierda = 221;
			break;
		case 2:
			arriba = 205;
			izquierda = 186;
			break;
		case 3:
			arriba = 196;
			izquierda = 179;
			break;
	}
	//Arriba
	gotoxy(x,y);printf("%c",254);
	for(int i = x ; i<q+x;i++){
		gotoxy(i+1,y);printf("%c",arriba);
		Sleep(15);
	}
	x=q+x;
	
	//Izquierda
	gotoxy(x,y);printf("%c",254);
	for(int i = y ; i<z+y;i++){
		gotoxy(x,i+1);printf("%c",izquierda);
		Sleep(15);
	}
	y=y+z;
	//Abajo
	gotoxy(x,y);printf("%c",254);
	for(int i = x ; i>x-q;i--){
		gotoxy(i-1,y);printf("%c",arriba);
		Sleep(15);
 	}
	x=x-q;
	//Derecha
	gotoxy(x,y);printf("%c",254);	
	for(int i = y ; i>y-z+1;i--){
		gotoxy(x,i-1);printf("%c",izquierda);
		Sleep(15);
	}
	gotoxy(5,29);
	
	
}
