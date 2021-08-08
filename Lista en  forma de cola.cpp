#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertar(Nodo *&,int);
void mostrar(Nodo *);
void eliminar(Nodo *&);
int main(){
	Nodo *lista;
	int datos;
	for(int i=0;i<10;i++){
		cout<<"\n\tDame el dato#"<<i+1<<" a ingresar: ";
		cin>>datos;
		insertar(lista,datos);
	}
	cout<<endl;
	mostrar(lista);
	eliminar(lista);
	mostrar(lista);
	return 0;
}
void insertar(Nodo *&lista,int n){
	Nodo *nuevo_nodo= new Nodo();
	Nodo *aux;//ojo piojo
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	if(lista==NULL){
		lista=nuevo_nodo;
	}
	else{
		aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo_nodo;
	}
}
void mostrar(Nodo *lista){
	if(lista!=NULL){
		while(lista!=NULL){
			cout<<"["<<lista->dato<<"]->";
			lista=lista->siguiente;
		}
	}
	else{
		cout<<"\nLista Vacia ";
	}
}
void eliminar(Nodo *&lista){
	Nodo  *aux;
	while(lista->siguiente!=NULL){
		aux=lista;
		lista=aux->siguiente;
		delete aux;
		cout<<"\nDato Borrado";
	}
	delete lista;
	lista=NULL;
}
