#include <windows.h> 
#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

void gotoxy(int x , int y){
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
	
}
void pintar();
void colores();

int main(){
	system("cls");
/*	printf("\033[0;31m");
	cout<<"Ahuevo  sin tantas lineas \n";
	printf("\033[0;33m");
	cout<<"El socialismo No funciona\n";
	printf("\033[0m");*/
	srand(time(NULL));
	pintar();
	for(int bucle=0;bucle<500;bucle++){
	colores();
	}
	gotoxy(0,30);printf("\033[0;36m");cout<<"Û";
	return 0;
}
void pintar(){
	int c=10,b=3,a=40;;
	//gotoxy(2,3);printf("%c",201);

	for(int j=0;j<3;j++){
	
	for(int i=j*4;i<c;i++){
		for(int k=0;k<a+c-i;k++){
			cout<<" ";
			
		}
		for(int k=0;k<i*2+1;k++){
			printf("\033[0;32m");cout<<"Û";//32 green
		}
		cout<<endl;
		
	}
	
	c=c+3;
	a=a-3;
}
	for(int i=0;i<6;i++){
		for(int k=0;k<47;k++){
			cout<<" ";
			
		}
		for(int j=0;j<7;j++){
				
			printf("\033[0;33m");cout<<"Û";
		}
		cout<<endl;
		
	}
	
}
void colores(){
	int color=0;
	color=rand()%5;
	switch (color){
		case 0:
	gotoxy(45,24);printf("\033[0;31m");cout<<"Û";
	gotoxy(50,11);printf("\033[0;31m");cout<<"Û";
	gotoxy(54,13);printf("\033[0;31m");cout<<"Û";
	gotoxy(41,23);printf("\033[0;31m");cout<<"Û";
	gotoxy(48,22);printf("\033[0;31m");cout<<"Û";
	gotoxy(47,18);printf("\033[0;31m");cout<<"Û";
	gotoxy(49,15);printf("\033[0;31m");cout<<"Û";
	gotoxy(46,14);printf("\033[0;31m");cout<<"Û";
	gotoxy(50,4);printf("\033[0;31m");cout<<"Û";
	gotoxy(48,8);printf("\033[0;31m");cout<<"Û";
	gotoxy(55,8);printf("\033[0;31m");cout<<"Û";
	gotoxy(56,18);printf("\033[0;31m");cout<<"Û";
	gotoxy(60,23);printf("\033[0;31m");cout<<"Û";
	gotoxy(54,25);printf("\033[0;31m");cout<<"Û";
		break;
		case 1:
	gotoxy(45,24);printf("\033[0;33m");cout<<"Û";
	gotoxy(50,11);printf("\033[0;33m");cout<<"Û";
	gotoxy(54,13);printf("\033[0;33m");cout<<"Û";
	gotoxy(41,23);printf("\033[0;33m");cout<<"Û";
	gotoxy(48,22);printf("\033[0;33m");cout<<"Û";
	gotoxy(47,18);printf("\033[0;33m");cout<<"Û";
	gotoxy(49,15);printf("\033[0;33m");cout<<"Û";
	gotoxy(46,14);printf("\033[0;33m");cout<<"Û";
	gotoxy(50,4);printf("\033[0;33m");cout<<"Û";
	gotoxy(48,8);printf("\033[0;33m");cout<<"Û";
	gotoxy(55,8);printf("\033[0;33m");cout<<"Û";
	gotoxy(56,18);printf("\033[0;33m");cout<<"Û";
	gotoxy(60,23);printf("\033[0;33m");cout<<"Û";
	gotoxy(54,25);printf("\033[0;33m");cout<<"Û";
		
		break;
		case 2:
		gotoxy(45,24);printf("\033[0;34m");cout<<"Û";
	gotoxy(50,11);printf("\033[0;34m");cout<<"Û";
	gotoxy(54,13);printf("\033[0;34m");cout<<"Û";
	gotoxy(41,23);printf("\033[0;34m");cout<<"Û";
	gotoxy(48,22);printf("\033[0;34m");cout<<"Û";
	gotoxy(47,18);printf("\033[0;34m");cout<<"Û";
	gotoxy(49,15);printf("\033[0;34m");cout<<"Û";
	gotoxy(46,14);printf("\033[0;34m");cout<<"Û";
	gotoxy(50,4);printf("\033[0;34m");cout<<"Û";
	gotoxy(48,8);printf("\033[0;34m");cout<<"Û";
	gotoxy(55,8);printf("\033[0;34m");cout<<"Û";
	gotoxy(56,18);printf("\033[0;34m");cout<<"Û";
	gotoxy(60,23);printf("\033[0;34m");cout<<"Û";
	gotoxy(54,25);printf("\033[0;34m");cout<<"Û";
		break;
		case 3:
		gotoxy(45,24);printf("\033[0;33m");cout<<"Û";
	gotoxy(50,11);printf("\033[0;33m");cout<<"Û";
	gotoxy(54,13);printf("\033[0;33m");cout<<"Û";
	gotoxy(41,23);printf("\033[0;33m");cout<<"Û";
	gotoxy(48,22);printf("\033[0;33m");cout<<"Û";
	gotoxy(47,18);printf("\033[0;33m");cout<<"Û";
	gotoxy(49,15);printf("\033[0;33m");cout<<"Û";
	gotoxy(46,14);printf("\033[0;33m");cout<<"Û";
	gotoxy(50,4);printf("\033[0;33m");cout<<"Û";
	gotoxy(48,8);printf("\033[0;33m");cout<<"Û";
	gotoxy(55,8);printf("\033[0;33m");cout<<"Û";
	gotoxy(56,18);printf("\033[0;33m");cout<<"Û";
	gotoxy(60,23);printf("\033[0;33m");cout<<"Û";
	gotoxy(54,25);printf("\033[0;33m");cout<<"Û";
		break;
		case 4:
		gotoxy(45,24);printf("\033[0;35m");cout<<"Û";
	gotoxy(50,11);printf("\033[0;35m");cout<<"Û";
	gotoxy(54,13);printf("\033[0;35m");cout<<"Û";
	gotoxy(41,23);printf("\033[0;35m");cout<<"Û";
	gotoxy(48,22);printf("\033[0;35m");cout<<"Û";
	gotoxy(47,18);printf("\033[0;35m");cout<<"Û";
	gotoxy(49,15);printf("\033[0;35m");cout<<"Û";
	gotoxy(46,14);printf("\033[0;35m");cout<<"Û";
	gotoxy(50,4);printf("\033[0;35m");cout<<"Û";
	gotoxy(48,8);printf("\033[0;35m");cout<<"Û";
	gotoxy(55,8);printf("\033[0;35m");cout<<"Û";
	gotoxy(56,18);printf("\033[0;35m");cout<<"Û";
	gotoxy(60,23);printf("\033[0;35m");cout<<"Û";
	gotoxy(54,25);printf("\033[0;35m");cout<<"Û";
		break;
	}
	gotoxy(38,33);cout<<"|||||||FELIZ NAVIDAD|||||||";
	gotoxy(41,34);cout<<"|||||Y FELIZ 2021||||||";
	gotoxy(38,35);cout<<"      Kelly y Familia <3";
	gotoxy(38,36);cout<<"      [by_Elias_Perez]";
	//Semestre
	gotoxy(15,2);cout<<"C++Mestre 20%";
	gotoxy(5,8);cout<<"[Nohely Leonor :3]";
	gotoxy(20,12);cout<<"[Joel Adrian <3]";
	gotoxy(5,16);cout<<"[Andres Cevallos uwu]";
	gotoxy(16,20);cout<<"[Mishell Salguero  OwO]";
	gotoxy(5,24);cout<<"[Melanie Gisella *-*]";
	//Pre
	gotoxy(75,2);cout<<"Buseta de la 63 B";
	gotoxy(75,8);cout<<"**<3 Nohe :) <3**";
	gotoxy(85,12);cout<<"**Alex <3 7w7**";
	gotoxy(75,16);cout<<"**Joseph <3 :v**";
	gotoxy(85,20);cout<<"**<3 Helen OwO**";
	gotoxy(75,24);cout<<"**Celinda <3 y Thanos :v**";
	gotoxy(0,30);printf("\033[0;36m");cout<<"Û";
	Sleep(300);



}

