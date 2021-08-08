#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertar(Nodo *&,int);
int main(){
	 Nodo *pila=NULL;//Declara una variable estructura tipo puntero
	int n1;
	for(int z=0;z<5;z++)
	{
	
	cout<<"Dame un numero\n";
	cin>>n1;
	insertar(pila,n1);//le pasa el valor del puntero y el dato a ingresar, la pila no necesita & porque ya sin el * la pasa por referencia
	}
	
	getch();
	return 0;
}
void insertar(Nodo *&pila,int n){
	cout<<"\nReferencia a pasar "<<pila;
	Nodo *nuevo_nodo= new Nodo();//Crea un nuevo nodo que es igual al estructura nodo es decir crea una nueva estructura
	cout<<"\nReferencia creada "<<nuevo_nodo;
	cout<<"\nReferencia puntero "<<nuevo_nodo->siguiente;
	nuevo_nodo->dato=n; //ahora uso el nombre.dato pero como es puntero nombre->dato y lo guarda ahi
	nuevo_nodo->siguiente=pila;// ahora lo mismo de arriba pero este puntero debe apuntar al que va atras de el osea en el primer caso null
	cout<<"\nReferencia puntero nuevo "<<nuevo_nodo->siguiente;
	pila=nuevo_nodo;//Ahora pila debe ser igual nuevo nodo ya que  otro puntero ya apunta a null y este debe apuntar al de la cima
	cout<<"\nNuevo valor de pila "<<pila;
	
	cout<<"\nNodo agregado correctamente\n";
}
