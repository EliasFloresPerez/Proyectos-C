#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct datos{
	char nombre[20];
	int  edad;
	char sexo[20];
	char nacionalidad[30];
	int  altura;
	
}persona1;
//Funciones
void recibir(){
    system("cls");
	cout<<"\nCual es tu nombre? ";cin.ignore(); 				 
	cin.getline(persona1.nombre,20,'\n');
	cout<<"\nCual es tu edad? ";  				 
	cin>>persona1.edad;
	cout<<"\nCual es tu sexo? ";cin.ignore();				 
	cin.getline(persona1.sexo,20,'\n');
	cout<<"\nCual es tu nacionalidad? ";		 
	cin.getline(persona1.nacionalidad,30,'\n');
	cout<<"\nCual es tu altura en centimetros? ";
	cin>>persona1.altura;
}
void imprimir(){
	system("cls");
	cout<<"\nNombre: "<<persona1.nombre;
	cout<<"\nEdad: "<<persona1.edad;
	cout<<"\nSexo: "<<persona1.sexo;
	cout<<"\nNacionalidad: "<<persona1.nacionalidad;
	cout<<"\nAltura: "<<persona1.altura<<endl;
	system("pause");
}

int main(){
	int y=0;
	do{
		do{
			system("cls");
			cout<<"\nBuenas Seleccione una opcion \n1)Insertar Datos\n2)Imprimir Datos\n3)salir\n"; cin>>y;
		}while(y<0||y>3);
		switch(y){
			case 1:
				recibir();
				break;
			case 2:
				imprimir();
				break;
		}
	   }while(y<3);
	
	
	getch();		
	return 0;
}
