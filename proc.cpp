#include <windows.h> 
#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int color = 1,pintado = 1, colorg=0;
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
void cuadrado();
void colorear();
void nombreI();
void corazon();
void cuadrado2();

int main(){
	system("cls");
	srand(time(NULL));
	cuadrado();
	for(int i=0;i<20;i++){
	nombreI();
	corazon();
	}
	cuadrado();
	for(int i=0;i<10;i++){
	nombreI();
	corazon();
	Sleep(500);
	}
	cuadrado2();
	cout<<endl;
	gotoxy(40,35);
	system("pause");
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

void cuadrado(){
	
	colorear();
	for(int y=0;y<30;y++){
		
		for(int i=0;i<128;i++){
			gotoxy(17+i,0+y);
			cout<<"л";
		}
	}
}


void nombreI(){
	colorear();
	gotoxy(55,2);  cout<<"                                                     ";
	gotoxy(55,3);  cout<<" лллллл                                лл        лл  ";
	gotoxy(55,4);  cout<<"   лл    лллллл      лллллл  лл  лллл        лллллл  "; 
	gotoxy(55,5);  cout<<"   лл    лл    лл  лл    лл  лллл      лл  лл    лл  "; 
	gotoxy(55,6);  cout<<"   лл    лл    лл  лл    лл  лл        лл  лл    лл  "; 
	gotoxy(55,7);  cout<<"   лл    лл    лл  лл    лл  лл        лл  лл    лл  "; 
	gotoxy(55,8);  cout<<" лллллл  лл    лл    лллллл  лл        лл    лллллл  "; 
	gotoxy(55,9);  cout<<"                         лл                          "; 
	gotoxy(55,10); cout<<"                     лллл                            "; 
	Sleep(25);
	
	//colorear
	colorear();
	gotoxy(74,12);  cout<<"           ";
	gotoxy(74,13);  cout<<"  лл    лл "; 
	gotoxy(74,14);  cout<<"  лл    лл "; 
	gotoxy(74,15);  cout<<"  лл    лл "; 
	gotoxy(74,16);  cout<<"    лллллл "; 
	gotoxy(74,17);  cout<<"        лл "; 
	gotoxy(74,18);  cout<<"    лллл   ";
	Sleep(25); 

	
	//colorear();
	colorear();
	gotoxy(55,20);  cout<<"                                                   ";
	gotoxy(55,21);  cout<<" лл    лл    лллл                                  ";
	gotoxy(55,22);  cout<<" лл  лл     л     л  лллллл    лл    лл    лллллл  "; 
	gotoxy(55,23);  cout<<" лллл      лллллллл  лл    лл  лл    лл  лл    лл  "; 
	gotoxy(55,24);  cout<<" лл  лл    лл        лл    лл  лл    лл  лл    лл  "; 
	gotoxy(55,25);  cout<<" лл    лл    лллллл  лл    лл    лллллл    лллллл  "; 
	gotoxy(55,26);  cout<<"                                    лл             "; 
	gotoxy(55,27);  cout<<"                                лллл               ";
	Sleep(25);


}

void cuadrado2(){
	
	
	for(int y=0;y<30;y++){
		
		for(int i=0;i<128;i++){
			gotoxy(17+i,0+y);
			colorear();
			cout<<"л";
			Sleep(0.5);
		}
	}
}
void  corazon(){
	colorear();
	gotoxy(19,11);  cout<<"                        ";
	gotoxy(19,12);  cout<<"   лллллл     лллллл    ";
	gotoxy(19,13);  cout<<"  лллллллл   лллллллл   ";
	gotoxy(19,14);  cout<<"  лллллллллллллллллл    "; 
	gotoxy(19,15);  cout<<"   лллллллллллллллл     "; 
	gotoxy(19,16);  cout<<"     лллллллллллл       "; 
	gotoxy(19,17);  cout<<"       лллллллл         "; 
	gotoxy(19,18);  cout<<"         лллл           "; 
	gotoxy(19,19);  cout<<"          лл            ";
	Sleep(25);
	
	colorear();
	gotoxy(120,11);  cout<<"                        ";
	gotoxy(120,12);  cout<<"   лллллл     лллллл    ";
	gotoxy(120,13);  cout<<"  лллллллл   лллллллл   ";
	gotoxy(120,14);  cout<<"  лллллллллллллллллл    "; 
	gotoxy(120,15);  cout<<"   лллллллллллллллл     "; 
	gotoxy(120,16);  cout<<"     лллллллллллл       "; 
	gotoxy(120,17);  cout<<"       лллллллл         "; 
	gotoxy(120,18);  cout<<"         лллл           "; 
	gotoxy(120,19);  cout<<"          лл            ";
	Sleep(25);

}






