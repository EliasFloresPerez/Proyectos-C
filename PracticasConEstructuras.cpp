#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct Promedios{
	int lenguaje;
	int matematicas;
	int ciencias;
	int musica;
};
struct Alumnos{
	char nombre[30];
	int edad;
	struct Promedios prom;
}alumnos[3];

void pedir_datos();
void comparar(Alumnos *);

int main(){
	pedir_datos();
	comparar(alumnos);
	getch();
	return 0;
}
void pedir_datos(){
	
	for(int i=0;i<3;i++){
		system("cls");
		cout<<"\n\t\tAlumno .:"<<i+1<<":.";
		cout<<"\nNombre: ";
		cin.getline(alumnos[i].nombre,30,'\n');
		cout<<"\nEdad: ";
		cin>>alumnos[i].edad;
		cout<<"\n\t\t.:Promedios:.";
		cout<<"\nlenguaje: ";
		cin>>alumnos[i].prom.lenguaje;
		cout<<"\nMatematicas: ";
		cin>>alumnos[i].prom.matematicas;
		cout<<"\nCiencias: ";
		cin>>alumnos[i].prom.ciencias;
		cout<<"\nMusica: ";
		cin>>alumnos[i].prom.musica;
		cin.ignore();
		getch();
	}
}
void comparar(Alumnos *mejor){
	int lenguaje_mejor=0,matematicas_mejor=0,ciencias_mejor=0,musica_mejor=0;
	for(int i=0;i<3;i++){
		if(mejor[i].prom.lenguaje>mejor[lenguaje_mejor].prom.lenguaje){
			lenguaje_mejor=i;
			
		}
		if(mejor[i].prom.matematicas>mejor[matematicas_mejor].prom.matematicas){
			matematicas_mejor=i;
			
		}
		if(mejor[i].prom.ciencias>mejor[ciencias_mejor].prom.ciencias){
			ciencias_mejor=i;
			
		}
		if(mejor[i].prom.musica>mejor[musica_mejor].prom.musica){
			musica_mejor=i;
			
		}
	}
	system("cls");
	cout<<"\n\t\t.::Los mejores estudiantes de cada materia!!::.";
	cout<<"\n\t\tLenguaje   : "<<mejor[lenguaje_mejor].nombre<< " con "<<mejor[lenguaje_mejor].prom.lenguaje;
	cout<<"\n\t\tMatematicas: "<<mejor[matematicas_mejor].nombre<< " con "<<mejor[matematicas_mejor].prom.matematicas;
	cout<<"\n\t\tCiencias   : "<<mejor[ciencias_mejor].nombre<< " con "<<mejor[ciencias_mejor].prom.ciencias;
	cout<<"\n\t\tMusica     : "<<mejor[musica_mejor].nombre<< " con "<<mejor[musica_mejor].prom.musica;
	
	
}
