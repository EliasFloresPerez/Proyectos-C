#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *dad;
};

void menu(int *);
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&,int,Nodo *);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo*,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
Nodo *minimo(Nodo*);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);
Nodo *arbol3=NULL;

int main(){
	int eleccion,dato,contador=0;
	do{
		menu(&eleccion);
		switch(eleccion){
			case 1:
				cout<<"\n\t\tDato a Ingresar: ";
				cin>>dato;
				insertarNodo(arbol3,dato,NULL);
			break;
			case 2:
				mostrarArbol(arbol3,contador);
			break;
			case 3:
				cout<<"\n\t\tIngrese el dato a buscar: ";
				cin>>dato;
				if(busqueda(arbol3,dato)){
					cout<<"\n\t\tEl dato "<<dato<<" fue encontrado";
				}
				else{
					cout<<"\n\t\tEl dato no fue encontrado";
				}
			break;
			case 4:
				cout<<"\n\t\tArbol en Pre-Orden :";
				preOrden(arbol3);
			break;
			case 5:
				cout<<"\n\t\tArbol en in-Orden :";
				inOrden(arbol3);
			break;
			case 6:
				cout<<"\n\t\tArbol en Post-Orden :";
				postOrden(arbol3);
			break;
			case 7:
				cout<<"\n\t\tDato a eliminar: ";
				cin>>dato;
				eliminar(arbol3,dato);
			break;
		}
		cout<<endl;
		system("pause");
		system("cls");
		
	}while(eleccion!=0);
	
	getch();
	return 0;
}
void menu(int *p){
	int x;
	cout<<"\n\t\tMENU\n\t\t1]Insertar Datos\n\t\t2]Mostrar Arbol\n\t\t3]Buscar dato\n\t\t4]Recorrido Pre-Orden\n\t\t5]Recorrido In-Orden\n\t\t6]Recorrido Post-Orden\n\t\t7]Eliminar Nodo\n\t\t0]Salir\n\t\tEleccion: ";
	cin>>x;
	*p=x;
}
Nodo *crearNodo(int n,Nodo *dad){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	nuevo_nodo->dad=dad;
}
void insertarNodo(Nodo *&arbol,int n,Nodo *dad){
	if(arbol==NULL){
		Nodo *nuevo_nodo=crearNodo(n,dad);
		arbol=nuevo_nodo;
	}
	else{
		int ValorRaiz=arbol->dato;
		if(n<ValorRaiz){
			insertarNodo(arbol->izq,n,arbol);
		}
		else{
			insertarNodo(arbol->der,n,arbol);
		}
	}
}
void mostrarArbol(Nodo *arbol,int cont){
	if(arbol==NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"  ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);	
		}
}
bool busqueda(Nodo *arbol,int n){
	if(arbol==NULL){
		return false;
	}
	else if(arbol->dato==n){
		return true;
	}
	else if(n<arbol->dato){
		return busqueda(arbol->izq,n);
	}
	else{
		return busqueda(arbol->der,n);
	}
	
	
}
void preOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		//visita la raiz luego el sub arbol izq y luego el derecho
		cout<<arbol->dato<<"-";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}	
}
void inOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		//visita todo el sub arbol izquierdo luego la raiz y al final el der creando un orden
		inOrden(arbol->izq);
		cout<<arbol->dato<<"-";
		inOrden(arbol->der);
	}	
}
void postOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		//Se imrpime primero el hijo izquierdo , luego el derecho y al final la raiz
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<"-";
	}	
}
Nodo *minimo(Nodo *arbol){//Esto Busca el Minimo
	if(arbol==NULL){
		return NULL;
	}
	if(arbol->izq){//Si todavia tiene hijos a la izq se llamara hasta el ultimo
		return minimo(arbol->izq);
	}
	else{
		return arbol;
	}
}
void eliminar(Nodo *arbol,int n){
	//Esta funcion ubica al valor a eliminar
	if(arbol==NULL){
		return;
	}
	else if(n<arbol->dato){
		eliminar(arbol->izq,n);
	}
	else if(n>arbol->dato){
		eliminar(arbol->der,n);
	}
	else{
		eliminarNodo(arbol);//Una vez encontrado lo manda a ver si tiene hijos 
	}
}
void eliminarNodo(Nodo *nodoEliminar){
	//Si tiene dos hijos
	if(nodoEliminar->der&&nodoEliminar->izq){
		Nodo *menor=minimo(nodoEliminar->der);
		nodoEliminar->dato=menor->dato;
		eliminarNodo(menor);//Aqui lo manda a eliminar ya no como un padre de dos hijos si no como una hoja o de un hijo
	}
	else if(nodoEliminar->izq){
		reemplazar(nodoEliminar,nodoEliminar->izq);//Esta funcion se encarga de remplazar el padre e hijo 
		destruirNodo(nodoEliminar);
	}
	else if(nodoEliminar->der){
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else{
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
}
void reemplazar(Nodo *arbol1,Nodo *nuevonodo){
	if(arbol1->dad){
		if(arbol1->dad->izq){//hay que validar que existe o dara errores
		
		if(arbol1->dato==arbol1->dad->izq->dato){
			arbol1->dad->izq=nuevonodo;
			cout<<"a";
		}
		}
		if(arbol1->dad->der){//hay que validar que existe o dara errores
		if(arbol1->dato==arbol1->dad->der->dato){
			arbol1->dad->der=nuevonodo;
			cout<<"b";
		}
		}
	}
	else{
		arbol3=nuevonodo;
	}
	if(nuevonodo){
		//Dar nuevo padre
		nuevonodo->dad=arbol1->dad;
	}
}
void destruirNodo(Nodo *nodo){
	nodo->izq=NULL;
	nodo->der=NULL;
	nodo->dad=NULL;
	delete nodo;
}
