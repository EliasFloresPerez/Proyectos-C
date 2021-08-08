//Programmer: Johan Yahir Villalpando Ibarra_310
//06/12/2019
//Сrbol de navidad que encienda focos
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int colores[]{1,4,3,5,9,11,12,13,14,15},color=0,tinte=0,pigme1,pigme2,cont=0;
void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }
 void printled(int abs, int ord){
++color;if(color==9){color=1;}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),colores[color]);
for(int j=abs+2;j<abs+3;++j){
 	for(int d=ord+1;d<ord+2;++d){
 	    gotoxy(j,d),cout<<"л";
		}	
	}
 }
 void borrarled(int ex,int guai){
 	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),2);
for(int j=ex+2;j<ex+3;++j){
 	for(int d=guai+1;d<guai+2;++d){
 	    gotoxy(j,d),cout<<"л";
		}	
	}
 }
 void impr(int h,int k,int tono){
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),colores[tono]);
for(int j=h+1;j<h+3;++j){
 	for(int d=k+1;d<k+2;++d){
 	    gotoxy(h+3,k+1),cout<<"л";
		}	
	}
 }
 void merrychristmas(int col1,int col2){
 	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col1);
gotoxy(1,1),cout<<"ллл ллл л   ллл лллл";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col2);
gotoxy(1,2),cout<<"л   л   л    л     л";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col1);
gotoxy(1,3),cout<<"лл  ллл л    л    л ";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col2);
gotoxy(1,4),cout<<"л   л   л    л   л  ";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col1);
gotoxy(1,5),cout<<"л   ллл ллл ллл лллл";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col2);
gotoxy(1,7),cout<<"л  л ллл л    л ллл лл   ллл лл  ";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col1);
gotoxy(1,8),cout<<"лл л л л л    л  л  л л  л л л л ";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col2);
gotoxy(1,9),cout<<"л лл ллл  л  л   л  л  л ллл л  л";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col1);
gotoxy(1,10),cout<<"л лл л л  л л    л  л  л л л л  л";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col2);
gotoxy(1,11),cout<<"л  л л л   л     л  л л  л л л л";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col1);
gotoxy(1,12),cout<<"л  л л л   л    ллл лл   л л лл";SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),col2);
 }
main(){
int d=49,r=2,a=51,x=0,y=0,opc=0;system("color 1");
cout<<"\nDe que manera desea prender los focos \n1.-Parpadeando\n2.-Series\n3.-Uno por uno\n4.-Todos un mismo color\n->";
cin>>opc;system("cls");
int arreglo1[2][12]{{47,51,49,55,50,45,57,39,61,56,35,30},{4,7,10,11,15,17,19,25,26,28,22,24}};
int arreglo2[2][12]{{49,52,47,39,45,48,39,32,42,37,57,67},{2,6,8,11,13,16,20,21,24,26,27,29}};
int arreglo3[2][12]{{53,47,50,45,60,56,51,46,58,40,34,44},{3,5,6,9,14,15,17,19,21,23,25,29}};
int serie1[2][10]{{41,43,45,47,49,51,53,55,57,59},{4,5,6,7,8,9,10,11,12,13}};
int serie2[2][16]{{38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68},{9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24}};
int serie3[2][16]{{33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63},{15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30}};
int serie4[2][11]{{28,30,32,34,36,38,40,42,44,46},{21,22,23,24,25,26,27,28,29,30,31}};
int serie5[2][4]{{23,25,27,29},{27,28,29,30}};
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),2);srand(time(NULL));
for(int johan=1;johan<=30;++johan){
    for(int j=d;j<=50;++j){gotoxy(j,r),cout<<"л";}
	  for(int k=50;k<a;++k){gotoxy(k,r),cout<<"л";}
	if(johan%6==0){d+=7,a-=7;}
	d-=2,a+=2,++r;
}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),6);
for(int p=32;p<=39;++p){
    for( int u=44;u<56;++u){
    	gotoxy(u,p),cout<<"л";
	}
}	
switch(opc){
case 1: while(true){merrychristmas(pigme1,pigme2);if(cont%2==0){pigme1=4,pigme2=7;}else{pigme1=12,pigme2=15;}++cont;
for(int d=0;d<12;++d){printled(arreglo1[0][d],arreglo1[1][d]);}//Imprimir leds 1
Sleep(1000);
for(int d=0;d<12;++d){borrarled(arreglo1[0][d],arreglo1[1][d]);}//Borrar serie 1
for(int d=0;d<12;++d){printled(arreglo2[0][d],arreglo2[1][d]);}//Imprimir leds 1
Sleep(1000);merrychristmas(pigme1,pigme2);if(cont%2==0){pigme1=4,pigme2=7;}else{pigme1=12,pigme2=15;}++cont;
for(int d=0;d<12;++d){borrarled(arreglo2[0][d],arreglo2[1][d]);}//Borrar serie 2
for(int d=0;d<12;++d){printled(arreglo3[0][d],arreglo3[1][d]);}//Imprimir leds 1
Sleep(1000);merrychristmas(pigme1,pigme2);if(cont%2==0){pigme1=4,pigme2=7;}else{pigme1=12,pigme2=15;}++cont;
for(int d=0;d<12;++d){borrarled(arreglo3[0][d],arreglo3[1][d]);}//Borrar serie 3
}
case 2:
while(true){cont++;merrychristmas(pigme1,pigme2);if(cont%2==0){pigme1=4,pigme2=7;}else{pigme1=12,pigme2=15;}++cont;
for(int d=0;d<16;++d){printled(serie2[0][d],serie2[1][d]);}//Imprimir leds 2
for(int d=0;d<10;++d){printled(serie4[0][d],serie4[1][d]);}//Imprimir leds 4
Sleep(1000);merrychristmas(pigme1,pigme2);if(cont%2==0){pigme1=4,pigme2=7;}else{pigme1=12,pigme2=15;}
for(int d=0;d<16;++d){borrarled(serie2[0][d],serie2[1][d]);}//Borrar serie 2
for(int d=0;d<10;++d){borrarled(serie4[0][d],serie4[1][d]);}//Borrar serie 4
for(int d=0;d<16;++d){printled(serie3[0][d],serie3[1][d]);}//Imprimir leds 3
for(int d=0;d<4;++d){printled(serie5[0][d],serie5[1][d]);}//Imprimir leds 5
Sleep(1000);
for(int d=0;d<16;++d){borrarled(serie3[0][d],serie3[1][d]);}//Borrar serie 3
for(int d=0;d<4;++d){borrarled(serie5[0][d],serie5[1][d]);}//Borrar serie 5
for(int d=0;d<10;++d){printled(serie1[0][d],serie1[1][d]);}//Imprimir leds 1
Sleep(1000);merrychristmas(pigme1,pigme2);if(cont%2==0){pigme1=4,pigme2=7;}else{pigme1=12,pigme2=15;}++cont;
for(int d=0;d<10;++d){borrarled(serie1[0][d],serie1[1][d]);}//Borrar serie 1
}
case 3: while(true){merrychristmas(pigme1,pigme2);if(cont%2==0){pigme1=4,pigme2=7;}else{pigme1=12,pigme2=15;}
for(int d=0;d<10;++d){printled(serie1[0][d],serie1[1][d]),Sleep(50);}//Imprimir leds 1
for(int d=0;d<16;++d){printled(serie2[0][d],serie2[1][d]),Sleep(50);}//Imprimir leds 2
for(int d=0;d<16;++d){printled(serie3[0][d],serie3[1][d]),Sleep(50);}//Imprimir leds 3
for(int d=0;d<10;++d){printled(serie4[0][d],serie4[1][d]),Sleep(50);}//Imprimir leds 4	
for(int d=0;d<4;++d){printled(serie5[0][d],serie5[1][d]),Sleep(50);}//Imprimir leds 5
Sleep(200);++cont;
for(int d=0;d<10;++d){borrarled(serie1[0][d],serie1[1][d]);}//Borrar serie 1
for(int d=0;d<16;++d){borrarled(serie2[0][d],serie2[1][d]);}//Borrar serie 2
for(int d=0;d<16;++d){borrarled(serie3[0][d],serie3[1][d]);}//Borrar serie 3
for(int d=0;d<10;++d){borrarled(serie4[0][d],serie4[1][d]);}//Borrar serie 4	
for(int d=0;d<4;++d){borrarled(serie5[0][d],serie5[1][d]);}//Borrar serie 5
}
case 4: while(true){merrychristmas(pigme1,pigme2);if(cont%2==0){pigme1=4,pigme2=7;}else{pigme1=12,pigme2=15;}
for(int d=0;d<9;++d){impr(serie1[0][d],serie1[1][d],tinte);}//Imprimir leds 1
for(int d=0;d<16;++d){impr(serie2[0][d],serie2[1][d],tinte);}//Imprimir leds 2
for(int d=0;d<16;++d){impr(serie3[0][d],serie3[1][d],tinte);}//Imprimir leds 3
for(int d=0;d<10;++d){impr(serie4[0][d],serie4[1][d],tinte);}//Imprimir leds 4	
for(int d=0;d<4;++d){impr(serie5[0][d],serie5[1][d],tinte);}//Imprimir leds 5
++tinte;if(tinte==9){tinte=0;}Sleep(1000);++cont;
}
}
}
