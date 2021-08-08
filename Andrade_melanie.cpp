#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

//Variables globales
int datos = 0;
int contador = 0;

//Prototipo de funciones
void menu(int *);
void llamadas(int,string *,int*,long int*, short int*);
void registrar(string *,long int *,short int *);
void notas(string *,int *);
void cambiar_notas(string *, int * ,long int *);
void resumen(int * ,short int *);
void reporte(int *, short int*);
void reporte_estudiante(string * ,int*,long int*, short int *);


int main(){
	//Variables
	int seleccion = 0;
	
	do{
	cout<<"\nCuantos estudiante va a procesar : ";
	cin>>datos; 
	}while(datos>25||datos<=0);
	
	//Arreglos
	string nombres[datos];
	int notas[datos];
	long int matriculas[datos];
	short int n_matriculas[datos];
	
	//Se repetira tantas veces hasta que el usuario quiera salir
	do{
		system("cls");
		menu(&seleccion);
		llamadas(seleccion,nombres,notas,matriculas,n_matriculas);
	}while(seleccion != 7);
	
	
	
	system("pause");
	return 0;
}

//menu de opciones
void menu(int *seleccion){
	system("cls");
	cout<<"\n\t\tMENU";
	cout<<"\n [1]  Registrar datos de estudiante.";
	cout<<"\n [2]  Registrar calificaciones de estudiantes.";
	cout<<"\n [3]  Rectificar una calificacion.";
	cout<<"\n [4]  Reporte Resumen Academico.";
	cout<<"\n [5]  Reporte Promedios.";
	cout<<"\n [6]  Reporte de estudiante";
	cout<<"\n [7]  Salir.";
	cout<<"\n\tSeleccion :";
	cin>>*seleccion;
}

//funcion que llama a las diferentes funciones
void llamadas(int seleccion,string *nombre,int *_notas ,long int *matriculas,short int *n_matriculas){
	
	switch(seleccion){
		case 1:
			if(contador < datos){
			registrar(nombre,matriculas,n_matriculas);
			}else{
				system("cls");
				cout<<"\n\t\tMaximo de estudiantes ingresados !!"<<"\nCupos pedidos : "<<datos<<"\n\n";
				system("pause");
				
			}
			break;
		case 2:
			if(contador != 0){
				notas(nombre,_notas);
			}
			
			break;
		case 3:
			if(contador != 0){
				cambiar_notas(nombre,_notas,matriculas);
			}
			break;
		case 4:
			if(contador != 0){
				resumen(_notas,n_matriculas);
			}
			break;
		case 5:
			if(contador != 0){
				reporte(_notas,n_matriculas);
			}
			break;
		case 6:
			if(contador != 0){
			reporte_estudiante(nombre,_notas,matriculas,n_matriculas);
			}
			break;
		case 7:
			system("cls");
			cout<<"\n\t\tGracias por usar el programa\n\n";
			
			break;
	}
}

//Cada estudiante se registra en esta funcion
void registrar(string *nombres, long int *matriculas ,short int *n_matriculas){
	char _nombre[30];


	system("cls");
	cout<<"\nNombre del estudiante :";
	cin.ignore();
	gets(_nombre);
	*(nombres + contador)= _nombre; 
	cin.ignore();
	cout<<"\nId de la matricula :";
	cin>>*(matriculas + contador);
	do{
		cout<<"\n # de la matricula :";
		cin>>*(n_matriculas + contador);
	}while(*(n_matriculas + contador)<1||*(n_matriculas + contador)>3);
	contador = contador +1;
}

//Esta funcion pide la notas a todos lo estudiantes
void notas(string *nombre,int *notas){
	
	for(int i = 0 ;i <contador;i++){
		system("cls");
		do{
			cout<<"\nDame la nota del estudiante "<<*(nombre + i)<<" [0-100] :";
			cin>>*(notas + i);
		}while( *(notas + i)<0 || *(notas + i)>100);
	}
}

//Esta funcion con una matricula busca al estudiante y cambia su nota
void cambiar_notas(string *nombre , int *notas , long int *matriculas){
	
	int matricula;
	bool ban = true;
	
	cout<<"\nDame la matricula a buscar :";
	cin>>matricula;
	cout<<endl;
	
	for(int i = 0;i<contador;i++){
		if(*(matriculas + i)==matricula){
			cout<<"\nEstudiante :"<<*(nombre + i);
			cout<<"\nLa nota actual :"<<*(notas +i);
			do{
				cout<<"\nDame la nota a remplazar [0 - 100]:";
				cin>>*(notas + i);
			}while( *(notas + i)<0 || *(notas + i)>100);
			ban = false;
		}
	}
	
	if(ban){
		cout<<"\nMatricula no encontrada!!!\n";
		system("pause");
	}
}

//Esta funcion cuenta los aprobados y reprobados y los clasifica
void resumen(int *notas , short int *n_matriculas){
	int aprobados_1 = 0, aprobados_2 = 0, aprobados_3 = 0;
	int reprobados_1 = 0, reprobados_2 = 0, reprobados_3 = 0;
	
	for(int i = 0;i < contador;i++){
		switch(*(n_matriculas+i)){
			case 1:
				if(*(notas +i )>=70){
					aprobados_1++;
				}else{
					reprobados_1++;
				}
				break;
			case 2:
				if(*(notas +i )>=70){
					aprobados_2++;
				}else{
					reprobados_2++;
				}
				break;
			case 3:
				if(*(notas +i )>=70){
					aprobados_3++;
				}else{
					reprobados_3++;
				}
				break;
		}
	}
	system("cls");
	cout<<"\n\n #Matricula  \t\t   Aprobados \t\t   Reprobados";
	cout<<"\nMatricula 1 :\t\t\t"<<aprobados_1<<"\t\t\t"<<reprobados_1;
	cout<<"\nMatricula 2 :\t\t\t"<<aprobados_2<<"\t\t\t"<<reprobados_2;
	cout<<"\nMatricula 3 :\t\t\t"<<aprobados_3<<"\t\t\t"<<reprobados_3;
	cout<<endl;
	system("pause");
}

//Funcion que imprime los promedios
void reporte(int *notas,short int *n_matriculas){
	int suma = 0,contador_1 = 0,contador_2 = 0,contador_3 = 0 ,suma1 = 0 ,suma2= 0 ,suma3 = 0;
	for(int i=0;i<contador;i++){
		switch(*(n_matriculas + i)){
			case 1:
				contador_1++;
				suma1 = suma1 + *(notas +i);
				break;
			case 2:
				contador_2++;
				suma2 = suma2 + *(notas +i);
				break;
			case 3:
				contador_3++;
				suma3 = suma3 + *(notas +i);
				break;
			
		}
		suma = suma + *(notas +i);
	}
	cout<<"\nEl promedio total de la materia es  : "<<suma/contador;
	if(contador_1 != 0){
		cout<<"\nPromedio de matricula 1 : "<<suma1/contador_1;
	}
	if(contador_2 !=0){
		cout<<"\nPromedio de matricula 2 : "<<suma2/contador_2;
	}
	if(contador_3 != 0){
		cout<<"\nPromedio de matricula 3 : "<<suma3/contador_3;
	}
	cout<<"\n\n";
	system("pause");
}
//Reporte de un estudiante con su matricula
void reporte_estudiante(string *nombre ,int *notas , long int *matriculas,short int *n_matriculas){
	long int matricula;
	bool ban = true;
	
	system("cls");
	cout<<"\nMatricula a buscar :";
	cin>>matricula;
	
	for(int i=0;i<contador;i++){
		if(*(matriculas + i)==matricula){
			cout<<"\nNombre del estudiante : "<<*(nombre + i);
			cout<<"\n Id Matricula : "<<*(matriculas + i);
			cout<<"\n # matricula : "<< *(n_matriculas +i);
			cout<<"\n Calificacion :"<<*(notas +i);
			cout<<endl;
			ban = false;
		}
	}
	if(ban){
		cout<<"\n\nMatricula no encontrada!!!\n";
	}
	system("pause");
}

