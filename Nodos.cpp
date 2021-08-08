#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertar(Nodo *&,int);
void eliminar(Nodo *&,int &);
int main (){
	int c,numero;
	Nodo *pila=NULL;
	cout<<"Cuantos datos vas a ingresar a la pila?\n";
	cin>>numero;
	for(int x=0;x<numero;x++){
	
	cout<<"Dame un numero: ";
	cin>>c;
	insertar(pila,c);
	}
	//Eliminar pila y mostrar los datos en ellos
	while(pila!=NULL){
		eliminar(pila,c);
		if(pila!=NULL){
			cout<<c<<" ,";
		}
		else {
			cout<<c<<".";
		}

	}
	getch();
	return 0;
}
void insertar(Nodo*&pila,int n){
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	cout<<"EL DATO : "<<n<<" A SIDO AGREGADO A PILA\n"; 
	
}
void eliminar(Nodo *&pila,int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
