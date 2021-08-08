#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <fstream>


using namespace std;

// Una estructura que contiene los datos del estudiante

struct Alumnos{
	string nombre;
	long int matricula;
	short int matricula_repetidas;
	int calificacion;
	Alumnos *siguiente;
};

//Variable global de el maximo de estudiantes
int contador_total=0;

//Prototipo de funciones
void menu(int *);
void insertar(Alumnos *&,Alumnos *&,string , long int , int);
void mostrar(Alumnos *,Alumnos *,long int);
bool cola_vacia(Alumnos*);
void seleccion(Alumnos *&,Alumnos *&,int);
void ingresar(Alumnos *&,Alumnos *&);
void registrar_notas(Alumnos *,Alumnos *);
int buscar(Alumnos *,Alumnos *,long int);
void aprobados(Alumnos *,Alumnos *);
void mostrarTabla(int , int ,int ,int ,int ,int);
//Para crear un archivo y tener un registro de lo que hizo en el programa
void eliminar(Alumnos *&,Alumnos *&);


int main(){
	system("cls");
	//Variables auxiliares
	int desicion = 0;
	
	//Punteros
	Alumnos *frente=NULL;
	Alumnos *fin=NULL;
	

	//Menu
	do{
		menu(&desicion);
		seleccion(frente ,fin ,desicion);
	}while(desicion != 7);

	return 0;
}

//Menu de opciones
void menu(int *x){ 
	system("cls");
	printf("\033[0;35m");
	cout<<"\n\t\tMENU";
	printf("\033[0;36m");
	cout<<"\n.:1:. Registrar datos de estudiante.";
	cout<<"\n.:2:. Registrar calificaciones de estudiantes.";
	cout<<"\n.:3:. Rectificar una calificacion.";
	cout<<"\n.:4:. Reporte Resumen Academico.";
	cout<<"\n.:5:. Reporte Promedios.";
	cout<<"\n.:6:. Reporte de estudiante";
	printf("\033[0;31m");
	cout<<"\n.:7:. Salir.";
	printf("\033[0;37m");
	cout<<"\n\tSeleccion :";
	cin>>*x;
}

//Selector de las elecciones

void seleccion(Alumnos *&frente,Alumnos *&fin,int x){
	int _matricula;
	float _promedio;
	switch(x){
		case 1:
			if(contador_total<25){
				ingresar(frente,fin);
				contador_total= contador_total +1;
			}
			break;
		case 2:
			if(contador_total>0){
				registrar_notas(frente,fin);
			}
			break;
		case 3:
			if(contador_total>0){
				cout<<"\n Matricula a buscar? :";
				cin>>_matricula;
				buscar(frente,fin,_matricula);
			}
			
			break;
		case 4:
				if(contador_total>0){
					aprobados(frente,fin);
				}
			break;
		case 5:
			if(contador_total>0){
				_promedio = buscar(frente,fin,75375);
				cout<<"\n\t\tPromedio total de la materia :";
				printf("\033[0;31m");
				if(_promedio/contador_total>=70){
					printf("\033[0;32m");	
				}
				cout<<_promedio/contador_total<<"\n\n";
				printf("\033[0;37m");
				system("pause");
			}		
			break;
		case 6:
			if(contador_total>0){
				cout<<"\n Matricula a buscar? :";
				cin>>_matricula;
				mostrar(frente,fin,_matricula);
			}
			break;
		case 7:
			cout<<"\t\t Gracias por usar el programa";
			eliminar(frente,fin);
			break;
	}
	
	
}

//Ingresar los datos 
void ingresar(Alumnos *&frente,Alumnos *&fin){
	char nombres_Alumno[50];
	long int _matricula;
	int _matriculas_repetidas;
	
	//Pidiendo los datos
	system("cls");
	cout<<"\n\t\tNombre del estudiante :";
	cin.ignore();
	gets(nombres_Alumno);
	cin.ignore();
	cout<<"\n\t\t ID de la Matricula:";
	
	cin>>_matricula;
	do{
		cout<<"\n\t\t Cuantas veces te has matriculado? [1-3]:";
	cin>>_matriculas_repetidas;	
	}while(_matriculas_repetidas<0||_matriculas_repetidas>3);
	
	//Lamando a la funcion para agregar a un alumno
	insertar(frente,fin,nombres_Alumno,_matricula,_matriculas_repetidas);

}


//Registrar notas del estudiante
void registrar_notas(Alumnos *frente,Alumnos *fin){
	int nota_a=1;
	bool ban = true;
	Alumnos *aux = frente;
	while(frente != NULL){
	if(frente==fin){
		if(frente->calificacion==0){
			ban = false;
		do{	
			if(nota_a<0||nota_a>100){
				cout<<"Porfavor ingrese una nota en el rango [0-100]";
			}
			system("cls");
			cout<<"Dame la nota del estudiante "<<frente->nombre <<"[0-100] :";
			cin>>nota_a;	
		}while(nota_a<0||nota_a>100);
		frente->calificacion =  nota_a;
		}
		frente=NULL;
		fin=NULL;
	}else{
		if(frente->calificacion==0){
			ban = false;
		do{	
			if(nota_a<0||nota_a>100){
				cout<<"Porfavor ingrese una nota en el rango [0-100]";
			}
			system("cls");
			cout<<"Dame la nota del estudiante "<<frente->nombre <<"[0-100] :";
			cin>>nota_a;	
		}while(nota_a<0||nota_a>100);
		frente->calificacion =  nota_a;
		}
		frente=frente->siguiente;	
	}
	}
	
	if(ban){
		system("cls");
		printf("\033[0;36m");
		cout<<"\n\n\t\t\tTodos los estudiantes estan calificados !!!\n\n\n";
		printf("\033[0;37m");
		system("pause");
	}
	
}


// Ingresar un nuevo alumno

void insertar(Alumnos *&frente,Alumnos *&fin,string _nombre, long int _matricula , int _repeticiones ){
	Alumnos *nuevo_nodo=new Alumnos();
	nuevo_nodo->nombre = _nombre;
	nuevo_nodo->matricula = _matricula;
	nuevo_nodo->matricula_repetidas = _repeticiones;
	nuevo_nodo->calificacion = 0;
	if(cola_vacia(frente)){
		frente=nuevo_nodo;
	}
	else{
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
	cout<<"\n\t\tAlumno agregado correctamente";
}

bool cola_vacia(Alumnos *frente){
	return(frente==NULL) ? true : false;
}

void mostrar(Alumnos *frente,Alumnos *fin,long int _matricula){
	int ban = 0;
	Alumnos *aux = frente;
	while(frente != NULL){
	if(frente==fin){
		if(frente->matricula==_matricula){
		cout<<"\nNombre : "<<frente->nombre;
		cout<<"\nMatricula : "<<frente->matricula;
		cout<<"\n# de matriculas : "<<frente->matricula_repetidas;
		cout<<"\nCalificacion: "<<frente->calificacion;
		ban=1;
		}
		frente=NULL;
		fin=NULL;
	}else{
		if(frente->matricula==_matricula){
		cout<<"\nNombre : "<<frente->nombre;
		cout<<"\nMatricula : "<<frente->matricula;
		cout<<"\n# de matriculas : "<<frente->matricula_repetidas;
		cout<<"\nCalificacion: "<<frente->calificacion;
		ban=1;
		}
		frente=frente->siguiente;	
	}
	}
	if(ban == 0){
		cout<<"\n\t\tMatricula No encontrada !!! [Revise si la ingreso bien]";
	}
	cout<<endl;
	system("pause");
}

int buscar(Alumnos *frente,Alumnos *fin,long int _matricula){
	int nota_a=1;
	int total_calificaciones = 0;
	
	Alumnos *aux = frente;
	while(frente != NULL){
	if(frente==fin){
		if(frente->matricula==_matricula){
			system("cls");
			cout<<"\nNombre : "<<frente->nombre<<"\nCalificacion actual :"<<frente->calificacion<<endl;
			do{	
				if(nota_a<0||nota_a>100){
					cout<<"Porfavor ingrese una nota en el rango [0-100]";
				}
				cout<<"Dame la nota del estudiante "<<frente->nombre <<"[0-100] :";
				cin>>nota_a;	
				}while(nota_a<0||nota_a>100);
				frente->calificacion =  nota_a;
				cout<<"\nNota cambiada correctamente";
		}
		total_calificaciones = total_calificaciones + frente->calificacion;	
		frente=NULL;
		fin=NULL;
	}else{
		if(frente->matricula==_matricula){
			system("cls");
			cout<<"\nNombre : "<<frente->nombre<<"\nCalificacion actual :"<<frente->calificacion<<endl;
			do{	
				if(nota_a<0||nota_a>100){
					cout<<"Porfavor ingrese una nota en el rango [0-100]";
				}
				cout<<"Dame la nota del estudiante "<<frente->nombre <<"[0-100] :";
				cin>>nota_a;	
				}while(nota_a<0||nota_a>100);
				frente->calificacion =  nota_a;
				cout<<"\nNota cambiada correctamente";
		}
		total_calificaciones = total_calificaciones + frente->calificacion;	
		frente=frente->siguiente;	
	}
	}
	return total_calificaciones;
}

void aprobados(Alumnos *frente,Alumnos *fin){
	int ban = 0;
	//Variables
	int aprobados_1 = 0, reprobados_1 = 0;
	int aprobados_2 = 0, reprobados_2 = 0;
	int aprobados_3 = 0, reprobados_3 = 0;
	Alumnos *aux = frente;
	while(frente != NULL){
	if(frente==fin){
		switch(frente->matricula_repetidas){
			case 1:
				if(frente->calificacion>=70){
					aprobados_1 = aprobados_1 + 1;
				}else{
					reprobados_1 = reprobados_1 +1;
				}
			break;
			case 2:
				if(frente->calificacion>=70){
					aprobados_2 = aprobados_2 + 1;
				}else{
					reprobados_2 = reprobados_2 +1;
				}
			break;
			case 3:
				if(frente->calificacion>=70){
					aprobados_3 = aprobados_3 + 1;
				}else{
					reprobados_3 = reprobados_3 +1;
				}
			break;
		}
		frente=NULL;
		fin=NULL;
		ban = 1;
	}else{
		switch(frente->matricula_repetidas){
			case 1:
				if(frente->calificacion>=70){
					aprobados_1 = aprobados_1 + 1;
				}else{
					reprobados_1 = reprobados_1 +1;
				}
			break;
			case 2:
				if(frente->calificacion>=70){
					aprobados_2 = aprobados_2 + 1;
				}else{
					reprobados_2 = reprobados_2 +1;
				}
			break;
			case 3:
				if(frente->calificacion>=70){
					aprobados_3 = aprobados_3 + 1;
				}else{
					reprobados_3 = reprobados_3 +1;
				}
			break;
		}
		frente=frente->siguiente;	
	}
	}

	cout<<endl;
	mostrarTabla(aprobados_1, reprobados_1,aprobados_2,reprobados_2,aprobados_3,reprobados_3);
}

void mostrarTabla(int aprobados_1, int reprobados_1,int aprobados_2,int reprobados_2,int aprobados_3,int reprobados_3){
	system("cls");
	
	printf("\033[0;32m");
	cout<<"\n\t\t\t\tAprobados";
	printf("\033[0;31m");
	cout<<"\t\tReprobados\n";
	printf("\033[0;37m");
	
	cout<<"Matricula 1 :\t\t\t    ";
	printf("\033[0;32m");
	cout<<aprobados_1<<"\t\t\t    ";
	printf("\033[0;31m");
	cout<<reprobados_1<<endl;
	printf("\033[0;37m");
	
	cout<<"Matricula 2 :\t\t\t    ";
	printf("\033[0;32m");
	cout<<aprobados_2<<"\t\t\t    ";
	printf("\033[0;31m");
	cout<< reprobados_2<<endl;
	printf("\033[0;37m");
	
	cout<<"Matricula 3 :\t\t\t    ";
	printf("\033[0;32m");
	cout<<aprobados_3<<"\t\t\t    ";
	printf("\033[0;31m");
	cout<< reprobados_3<<"\n\n";
	printf("\033[0;37m");
	system("pause");
}

/* Eliminar la memoria dinamica utilizada para una buena practica ademas de guardarlo en un
	archivo tipo escritura que guardara los datos que usted ingreso en este programa */
	
void eliminar(Alumnos *&frente,Alumnos *&fin){
	//Abriendo archivo
	ofstream archivo;
	archivo.open("Base_de_Datos.txt",ios::out);
	if(archivo.fail()){
		exit(1);
	}
	Alumnos *aux=frente;
	while(frente != NULL){
	if(frente==fin){
		archivo<<"\nNombres del estudiante :"<<frente->nombre<<endl;
		archivo<<"Id de la  Matricula :"<<frente->matricula<<endl;
		archivo<<"Numero de matriculas: "<<frente->matricula_repetidas<<endl;
		archivo<<"Calificacion : "<<frente->calificacion<<endl;
		
		frente=NULL;
		fin=NULL;
		archivo.close();
	}else{
		archivo<<"\nNombres del estudiante  :"<<frente->nombre<<endl;
		archivo<<"Id de la  Matricula :"<<frente->matricula<<endl;
		archivo<<"Numero de matriculas: "<<frente->matricula_repetidas<<endl;
		archivo<<"Calificacion : "<<frente->calificacion<<endl;
		
		frente=frente->siguiente;	
	}
	delete aux;
	}
}


















