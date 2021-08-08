//Pedir al usuario N números, almacenarlos en un arreglo dinámico 
//posteriormente ordenar los números en orden ascendente y mostrarlos en pantalla. 
//NOTA: Utilizar cualquier método de ordenamiento.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
int numero,*arreglo;
using namespace std;
void pedir();
void ordenar();
void mostrar();
int main(){
	pedir();
	ordenar();
	mostrar();
	delete[]arreglo;
	getch();
	return 0;	
}
void pedir(){
	cout<<"Cuantos numeros vas a poner?:";
	cin>>numero;
	arreglo= new int[numero];
	for(int i=0;i<numero;i++){
		cout<<"Dame el valor ["<<i+1<<"] :";
		cin>>arreglo[i];
	}	
}
void ordenar(){
	int a,b,c;
	for(int i=0;i<numero;i++){
		for(;b<numero;b++){
			if(arreglo[a]>arreglo[b]){
				c=arreglo[a];
				arreglo[a]=arreglo[b];
				arreglo[b]=c;
				a++;
			}	
		}
		a=0;
		b=0;
	}	
}
void mostrar(){
	cout<<"\n\t\tMostrando Datos\n";
	cout<<"\t\t";
	for(int i=0;i<numero;i++){
		cout<<"["<<arreglo[i]<<"]";
	}
	cout<<endl;	
}
