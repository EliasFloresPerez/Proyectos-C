#include <windows.h> 
#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int color = 1,pintado = 1;
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
void pintarU();
void pintarN();
void pintarE();
void pintarM();
void pintarI();
void colorear();
void marco();

int main(){
	system("cls");
	srand(time(NULL));
	int dato,tiempo=30;
	do{
	system("cls");
	gotoxy(60,12);cout<<".:Que presentasion deseas?:.";
	gotoxy(58,13);cout<<"1]Marco y letras cambian igual";
	gotoxy(58,14);cout<<"2]Letras Rainbow";
	gotoxy(58,15);cout<<"3]Marco cambiante[letras no]";
	gotoxy(58,16);cout<<"Cual eliges ?: ";
	cin>>dato;
	}while(dato<1||dato>3);
	ocultar();
	system("cls");
	switch (dato){
		case 1:
			tiempo = 10;
			while(tiempo>0){
			marco();
			pintarU();
			pintarN();
			pintarE();
			pintarM();
			pintarI();
			gotoxy(30,30);
			tiempo--;
			}
		break;
		case 2:
			tiempo=60;
			while(tiempo==60){
				marco();
				while(tiempo>0){
					colorear();
					pintarU();
					Sleep(25);
					colorear();
					pintarN();
					Sleep(25);	
					colorear();
					pintarE();
					Sleep(25);
					colorear();
					pintarM();
					Sleep(25);
					colorear();
					pintarI();
					Sleep(25);
					tiempo--;			
				}
			}
		break;
		case 3:
			while(tiempo==30){
				printf("\033[0;32m");
				pintarU();
				pintarN();
				pintarE();
				pintarM();
				pintarI();
				while(tiempo>0){
					marco();
					tiempo--;	
				}
			}	
	
	}
	gotoxy(40,40);
	return 0;
}
void colorear(){

	//Para que no se repitan los colores
	for (; pintado == color;){
		pintado=rand()%5+1;
	}
	color = pintado;
	switch (color){
		case 0:
		printf("\033[0;30m");
		break;
		case 1:
		printf("\033[0;31m");
		break;
		case 2:
		printf("\033[0;32m");
		break;
		case 3:
		printf("\033[0;33m");
		break;
		case 4:
		printf("\033[0;34m");
		break;
		case 5:
		printf("\033[0;35m");
		break;
		case 6:
		printf("\033[0;36m");
		break;
		case 7:
		printf("\033[0;37m");
		break;
		case 8:
		printf("\033[0;38m");
		break;
		case 9:
		printf("\033[0;39m");
		break;
	}
}
void marco(){
	//Arriba
	colorear();
	gotoxy(17,8);printf("%c",201);
	for(int i = 0 ; i<128;i++){
		gotoxy(18+i,8);printf("%c",205);
		Sleep(15);
	}
	//Izquierda
	gotoxy(145,8);printf("%c",187);
	for(int i = 0 ; i<18;i++){
		gotoxy(145,9+i);printf("%c",186);
		Sleep(15);
	}

	//Abajo
	gotoxy(145,26);printf("%c",188);
	for(int i = 144 ; i>17;i--){
		gotoxy(i,26);printf("%c",205);
		Sleep(15);
 	}

	//Derecha
	gotoxy(17,26);printf("%c",200);	
	for(int i = 25 ; i>8;i--){
		gotoxy(17,i);printf("%c",186);
		Sleep(15);
	}
	gotoxy(5,29);
}
void pintarU(){
	gotoxy(20,12);  cout<<"лллл             лллл";
	gotoxy(20,13);  cout<<"лллл             лллл"; 
	gotoxy(20,14);  cout<<"лллл             лллл"; 
	gotoxy(20,15);  cout<<"лллл             лллл"; 
	gotoxy(20,16);  cout<<"лллл             лллл"; 
	gotoxy(20,17);  cout<<"лллл             лллл"; 
	gotoxy(20,18);  cout<<"лллл             лллл"; 
	gotoxy(20,19);  cout<<"лллл             лллл"; 
	gotoxy(20,20);  cout<<"лллл             лллл"; 
	gotoxy(20,21);  cout<<"лллл             лллл";
	gotoxy(20,22);  cout<<" ллллллллллллллллллл ";
	gotoxy(20,23);  cout<<"  ллллллллллллллллл  "; 
 
              
}


void pintarN(){
	gotoxy(45,12);  cout<<"лллллл          лллл";
	gotoxy(45,13);  cout<<"ллллллл         лллл"; 
	gotoxy(45,14);  cout<<"лллллллл        лллл"; 
	gotoxy(45,15);  cout<<"лллл  лллл      лллл"; 
	gotoxy(45,16);  cout<<"лллл   лллл     лллл"; 
	gotoxy(45,17);  cout<<"лллл    лллл    лллл"; 
	gotoxy(45,18);  cout<<"лллл     лллл   лллл"; 
	gotoxy(45,19);  cout<<"лллл      лллл  лллл"; 
	gotoxy(45,20);  cout<<"лллл       лллл лллл"; 
	gotoxy(45,21);  cout<<"лллл        лллллллл";
	gotoxy(45,22);  cout<<"лллл          лллллл";
	gotoxy(45,23);  cout<<"лллл           ллллл";

}

void pintarE(){
	
	gotoxy(70,12);  cout<<"ллллллллллллллл";
	gotoxy(70,13);  cout<<"лллл"; 
	gotoxy(70,14);  cout<<"лллл"; 
	gotoxy(70,15);  cout<<"лллл"; 
	gotoxy(70,16);  cout<<"лллл"; 
	gotoxy(70,17);  cout<<"ллллллллллллллл"; 
	gotoxy(70,18);  cout<<"ллллллллллллллл"; 
	gotoxy(70,19);  cout<<"лллл"; 
	gotoxy(70,20);  cout<<"лллл"; 
	gotoxy(70,21);  cout<<"лллл";
	gotoxy(70,22);  cout<<"лллл";
	gotoxy(70,23);  cout<<"ллллллллллллллл";


}
void pintarM(){
	gotoxy(90,12);  cout<<"ллллллл                ллллллл";
	gotoxy(90,13);  cout<<"лллллллл              лллллллл"; 
	gotoxy(90,14);  cout<<"лллл лллл            лллл лллл"; 
	gotoxy(90,15);  cout<<"лллл  лллл          лллл  лллл"; 
	gotoxy(90,16);  cout<<"лллл   лллл        лллл   лллл"; 
	gotoxy(90,17);  cout<<"лллл    лллл      лллл    лллл"; 
	gotoxy(90,18);  cout<<"лллл     лллл    лллл     лллл"; 
	gotoxy(90,19);  cout<<"лллл      лллл  лллл      лллл"; 
	gotoxy(90,20);  cout<<"лллл       лллллллл       лллл"; 
	gotoxy(90,21);  cout<<"лллл        лллллл        лллл";
	gotoxy(90,22);  cout<<"лллл         лллл         лллл";
	gotoxy(90,23);  cout<<"лллл          лл          лллл";	

}

void pintarI(){
	gotoxy(124,12);  cout<<"  лллллллллллллллл  ";
	gotoxy(124,13);  cout<<"  лллллллллллллллл  "; 
	gotoxy(124,14);  cout<<"        лллл        "; 
	gotoxy(124,15);  cout<<"        лллл        "; 
	gotoxy(124,16);  cout<<"        лллл        "; 
	gotoxy(124,17);  cout<<"        лллл        "; 
	gotoxy(124,18);  cout<<"        лллл        "; 
	gotoxy(124,19);  cout<<"        лллл        "; 
	gotoxy(124,20);  cout<<"        лллл        "; 
	gotoxy(124,21);  cout<<"        лллл        "; 
	gotoxy(124,22);  cout<<"  лллллллллллллллл  ";
	gotoxy(124,23);  cout<<"  лллллллллллллллл  "; 
	
}


