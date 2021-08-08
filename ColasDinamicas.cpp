#include <iostream>
#include <stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertar(Nodo *&,Nodo *&,int);
void eliminar(Nodo *&,Nodo *&,int &);
bool cola_vacia(Nodo*);
void menu(int *);
int main(){
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	int dato,seleccion;
	do{
		menu(&seleccion);
		switch(seleccion){
			case 1:
			cout<<"\n\t\tEl dato a ingresar: ";
			cin>>dato;
			insertar(frente,fin,dato);
			break;
			case 2:
			cout<<"\n\t\t";
			while(frente!=NULL){
				eliminar(frente,fin,dato);
				cout<<"["<<dato<<"] ";
			}
			break;
		}
		cout<<endl;
		system("pause");
	}while(seleccion!=0);
	
	
	return 0;
}
void menu(int *seleccion){
	int n;
	system("cls");
	cout<<"\n\t\tColas Dinamicas\n\t\t1]Insertar Datos\n\t\t2]Eliminar todos los datos\n\t\t0]Salir\n\t\tEleccion: ";
	cin>>n;
	*seleccion=n;
}

void insertar(Nodo *&frente,Nodo *&fin,int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	if(cola_vacia(frente)){
		frente=nuevo_nodo;
	}
	else{
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
	cout<<"\n\t\tDato agregado a la cola correctamente";
}
void eliminar(Nodo *&frente,Nodo *&fin,int &n){
	Nodo *aux=frente;
	n=aux->dato;
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	}else{
		frente=frente->siguiente;	
	}
	delete aux;
	
}
bool cola_vacia(Nodo *frente){
	return(frente==NULL) ? true : false;
}
