#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int numCalif,*calif;
void pedir();
void mostrar();
int main(){
	pedir();
	mostrar();
	delete[] calif;
	getch();
	return 0;
}
void pedir(){
	cout<<"Deme el numero de calificaciones:"; 
	cin>>numCalif;
	calif= new int [numCalif];
	for(int i=0;i<numCalif;i++){
		cout<<"Deme la calificacion numero "<<i+1<<" :";
		cin>>calif[i]; //Muy importante 
	}
}
void mostrar(){
	cout<<"\n\t\tMostrando Datos\n";
	for(int i=0;i<numCalif;i++){
		cout<<"\n.:"<<i+1<<":. "<<calif[i]<<endl;
		cout<<"posicion:"<<calif+i;
	}
}
