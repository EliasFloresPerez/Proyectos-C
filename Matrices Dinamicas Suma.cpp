#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int **puntero_matriz,**puntero_matriz2,Col,Fil;
void pedir();
void sumar(int**,int**,int,int);
void mostrar(int**,int,int);
int main(){
	pedir();
	sumar(puntero_matriz,puntero_matriz2,Col,Fil);
	mostrar(puntero_matriz,Col,Fil);
	getch();
	return 0;
}
void pedir(){
	cout<<"Digite el numero de Filas\n";
	cin>>Fil;
	cout<<"Digite el numero de columnas\n";
	cin>>Col;
	puntero_matriz=new int*[Fil];//importante
	for(int i=0;i<Fil;i++){
		puntero_matriz[i]= new int[Col];
	}
	cout<<"\t\tPrimera Matriz\n";
	for(int i=0;i<Fil;i++){
		for(int j=0;j<Col;j++){
			cout<<"\t\tDame un numero: ["<<i<<"]"<<"["<<j<<"]: ";
			cin>>puntero_matriz[i][j];
		}
	}
	//2 Matriz
	cout<<"\n\t\tSegunda Matriz\n";
		puntero_matriz2=new int*[Fil];//importante
	for(int i=0;i<Fil;i++){
		puntero_matriz2[i]= new int[Col];
	}
	for(int i=0;i<Fil;i++){
		for(int j=0;j<Col;j++){
			cout<<"\t\tDame un numero: ["<<i<<"]"<<"["<<j<<"]: ";
			cin>>puntero_matriz2[i][j];
		}
	}
}
void sumar(int **matriz1,int **matriz2,int columna,int fila){
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			matriz1[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
}
void mostrar(int **matriz1,int columna,int fila ){
	cout<<"\n\t\tLa Suma de sus matrices es :\n\t\t";
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<"["<<matriz1[i][j]<<"] ";
		}
		cout<<"\n\t\t";
	}
}
