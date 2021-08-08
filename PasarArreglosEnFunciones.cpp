#include <iostream>
#include <conio.h>
using namespace std;
//RECUERDA QUE PARA UNA BUENA PRACTIA DE PROGRAMACION CADA FUNCION DEBE HACER SOLO UNA ACCION
//Y TENER SU PROTOTIPO DE FUNCION EN ESTE CASO
// void nombre(tipo nombre[],tamaño)
void cuadrado(int vec[],int);
void mostrar(int vec[],int);
int main(){
	const int TAM=5;
	int vec[TAM]={1,2,3,4,5};
	cout<<endl;
	cuadrado(vec,TAM);
	mostrar(vec,TAM);
	
	getch();
	return 0;
}
//RECUERDA NO NECESITAS PASAR POR REFERENCIA LOS VECTORES PORQUE C++ YA LO HACE PERO PARA LOS QUE NO 
// SON VECTORES DEBES USAR int& PARA MODIFICARLOS DESDE SU RAIZ
void cuadrado(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i]*=vec[i];
	}
}
void mostrar(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<"[ "<<vec[i]<<" ]";
	}
}
