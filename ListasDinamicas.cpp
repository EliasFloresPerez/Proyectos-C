#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void menu(int *);
void insertarLista(Nodo*&,int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *,int);
void eliminarNodo(Nodo*&,int);
void eliminarTodo(Nodo *&,int &);
int main(){
	Nodo *lista=NULL;
	int dato,seleccion;
	
	do{
	menu(&seleccion);
	switch (seleccion){
		case 1:
			cout<<"\n\t\tIngresar Dato: ";
			cin>>dato;
			insertarLista(lista,dato);
			break;
		case 2:
			mostrarLista(lista);
			break;
		case 3:
			cout<<"\n\t\tIngrese Dato a Buscar: ";
			cin>>dato;
			buscarLista(lista,dato);
			break;
		case 4:
			cout<<"\n\t\tIngrese el dato a Borrar: ";
			cin>>dato;
			eliminarNodo(lista,dato);
			break;
		case 5:
			while(lista!=NULL){
				eliminarTodo(lista,dato);
				cout<<"["<<dato<<"]->";
			}
			break;
		case 0:
			cout<<"\n\t\tGracias :)";
			break;
		defaul:
		cout<<"\n\t\tOpcion No Valida";
	}
	cout<<endl;
	system("pause");
	}while(seleccion!=0);
	
	getch();
	return 0;
}
void insertarLista(Nodo*&lista,int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	Nodo *aux1=lista;
	Nodo *aux2;//Ojo piojo puntero salvaje 
	while((aux1!=NULL)&&(aux1->dato<n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista==aux1){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
}
void menu(int *seleccion){
	int b;
	system("cls");
	cout<<"\n\t\tMENU\n\t\t1]Insertar\n\t\t2]Mostrar\n\t\t3]Buscar\n\t\t4]Eliminar Dato\n\t\t5]Eliminar Todo\n\t\t0]Salir\n\t\tEleccion: ";
	cin>>b;
	*seleccion=b;
}
void mostrarLista(Nodo *lista){
	Nodo *actual=new Nodo();
	actual=lista;
	cout<<endl;
	while(actual!=NULL){
		cout<<"["<<actual->dato<<"]-> ";
		actual=actual->siguiente;
	}	
}
void buscarLista(Nodo *lista,int n){
	bool band=false;
	Nodo *actual=new Nodo();
	actual=lista;
	while((actual!=NULL)&&(actual->dato<=n)){
		if(actual->dato==n){
			band=true;
		}
		actual=actual->siguiente;
	}
	
	if(band==true){
		cout<<"\n\t\tElemento #"<<n<<" encontrado en la lista\n";
	}
	else{
		cout<<"\n\t\tElemento #"<<n<<" NO encontrado en la lista\n";
	}
	
}
void eliminarNodo(Nodo *&lista,int n){
	if(lista!=NULL){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=lista;
		while((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		if(aux_borrar==NULL){
			cout<<"\n\t\tEL dato no existe";
		}
		else if(anterior==NULL){
			lista=lista->siguiente;
			delete aux_borrar;
		}
		else {
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}
void eliminarTodo(Nodo *&lista,int &n){
	Nodo *aux=lista;
	n=aux->dato;
	lista=aux->siguiente;
	delete aux;
}
