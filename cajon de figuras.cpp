#include <iostream>
#include <stdlib.h>
#include <fstream>
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
void ocultar(){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = false;
	SetConsoleCursorInfo(hCon,&cci);
}
void pintarmarco(int,int,int,int);
void pintarcentro(int,int,int,int);
void instrucciones(char);
void pintar(int,int);
int calcular();
int a=0,b=0;
int coordenadas[50][2];
int coordenadax,coordenaday,posicion=0;
int fila=0;
int main(){
	system("cls");
	ocultar();
	//gotoxy(45,10);cout<<"Hola";
	char orden;
	a=45;
	b=4;
	pintarmarco(a,b,40,20);
	pintarcentro(a,b,40,20);
	printf("\033[0;31m");
	gotoxy(65,14);printf("%c",197);
	printf("\033[0;37m");
	do{
		do{
		printf("\033[0;37m");
		gotoxy(45,26);cout<<"Deme la instruccion:(Subir,Bajar,Izq,Der):           ";
		gotoxy(87,26);cin>>orden;
		}while(!(orden=='S'|orden=='B'||orden=='I'||orden=='D'));
		instrucciones(orden);
	}while(!((coordenadas[0][0]==coordenadas[coordenadax-1][coordenaday])&&(coordenadas[0][1]==coordenadas[coordenadax-1][coordenaday+1])));
	cout<<endl;
	printf("\033[0;34m");
	gotoxy(45,27);cout<<"El area de la figura es "<<calcular();
	printf("\033[0;37m");
	gotoxy(100,30);
	return 0;
}

void pintarmarco(int x,int y,int q , int z){
	//Arriba
	gotoxy(x,y);printf("%c",218);
	for(int i = x ; i<q+x;i++){
		gotoxy(i+1,y);printf("%c",45);
		Sleep(15);
	}
	x=q+x;
	
	//Izquierda
	gotoxy(x,y);printf("%c",191);
	for(int i = y ; i<z+y;i++){
		gotoxy(x,i+1);printf("%c",221);
		Sleep(15);
	}
	y=y+z;
	//Abajo
	gotoxy(x,y);printf("%c",217);
	for(int i = x ; i>x-q;i--){
		gotoxy(i-1,y);printf("%c",45);
		Sleep(15);
 	}
	x=x-q;
	//Derecha
	gotoxy(x,y);printf("%c",192);	
	for(int i = y ; i>y-z+1;i--){
		gotoxy(x,i-1);printf("%c",221);
		Sleep(15);
	}
	gotoxy(5,29);
	
	
}

void pintarcentro(int x,int y, int q, int z){
	//Pintar lineas horizontales
	for(int i=x;i<x+q-1;i++){
		gotoxy(i+1,y+z/4);printf("%c",45);
	}
	for(int i=x;i<x+q-1;i++){
		gotoxy(i+1,y+z/2);printf("%c",45);
	}
	for(int i=x;i<x+q-1;i++){
		gotoxy(i+1,y+3*z/4);printf("%c",45);
	}
	//Pintar lineas verticales
	for(int i=y;i<y+z-1;i++){
		gotoxy(x+q/4,i+1);printf("%c",221);
	}
	for(int i=y;i<y+z-1;i++){
		gotoxy(x+q/2,i+1);printf("%c",221);
	}
	for(int i=y;i<y+z-1;i++){
		gotoxy(x+3*q/4,i+1);printf("%c",221);
	}
}

void instrucciones(char orden){
	int modificarx=0,modificary=0;
	int bandera=0;
	if(posicion==0){
		coordenadas[coordenadax][coordenaday]=65;
		coordenaday++;
		coordenadas[coordenadax][coordenaday]=14;
		coordenadax++;
		coordenaday=0;
	}
	printf("\033[0;33m");
	switch(orden){
		case 'S':
			modificary=-5;
			if(coordenadas[fila][1]-5>=4){
			for(int i=0;i<5;i++){
				gotoxy(coordenadas[fila][0],coordenadas[fila][1]-i);printf("%c",179);
			}
			}else{
				bandera=1;
			}
		break;
		case 'B':
			modificary=5;
			if(coordenadas[fila][1]+5<=24){
			for(int i=0;i<5;i++){
				gotoxy(coordenadas[fila][0],coordenadas[fila][1]+i);printf("%c",179);
			}	
		}else{
			bandera=1;
		}
		break;
		case 'I':
			modificarx=-10;
			if(coordenadas[fila][0]-10>=45){
			for(int i=0;i<10;i++){
				gotoxy(coordenadas[fila][0]-i,coordenadas[fila][1]);printf("%c",196);
			}
			}else{
				bandera=1;
		}
		break;
		case 'D':
			if(coordenadas[fila][0]+10<=85){
			for(int i=0;i<10;i++){
				gotoxy(coordenadas[fila][0]+i,coordenadas[fila][1]);printf("%c",196);
			}
			modificarx=10;
		}else{
			bandera=1;
		}
		break;
	}
	printf("\033[0;31m");
	gotoxy(65,14);printf("%c",197);
	printf("\033[0;33m");
	//centro
	gotoxy(55,9);printf("%c",197);
	gotoxy(65,9);printf("%c",197);
	gotoxy(75,9);printf("%c",197);
	gotoxy(55,14);printf("%c",197);
	gotoxy(75,14);printf("%c",197);
	gotoxy(55,19);printf("%c",197);
	gotoxy(65,19);printf("%c",197);
	gotoxy(75,19);printf("%c",197);
	gotoxy(45,4);printf("%c",218);
	gotoxy(85,4);printf("%c",191);
	gotoxy(85,24);printf("%c",217);
	gotoxy(45,24);printf("%c",192);
	//vertices
	gotoxy(65,4);printf("%c",194);
	gotoxy(55,4);printf("%c",194);
	gotoxy(75,4);printf("%c",194);
	
	gotoxy(55,24);printf("%c",193);
	gotoxy(65,24);printf("%c",193);
	gotoxy(75,24);printf("%c",193);
	
	gotoxy(45,9);printf("%c",195);
	gotoxy(45,19);printf("%c",195);
	gotoxy(45,24);printf("%c",195);
	
	gotoxy(85,9);printf("%c",180);
	gotoxy(85,14);printf("%c",180);
	gotoxy(85,19);printf("%c",180);
	if(bandera==0){
	fila++;
	coordenadas[coordenadax][0]=coordenadas[coordenadax-1][0]+modificarx;
	coordenadas[coordenadax][1]=coordenadas[coordenadax-1][1]+modificary;
	coordenadax++;
	posicion++;
	}
}

int calcular(){
	int total1=0,total2=0;
	float total=0;
	for(int i=0;i<fila;i++){
		total1=coordenadas[i][0]*coordenadas[i+1][1]+total1;
	}
	for(int i=0;i<fila;i++){
		total2=coordenadas[i][1]*coordenadas[i+1][0]+total2;
	}
	 total=(total2-total1)/2;
	 if(total<0){
	 	total=total*-1;
	 }
	 return total/50;
}

