/*Realice una funcion que dada un matriz y un numero mde filas de la matriz devuelva el menor 
 de los elementos almecenado en dicha fila.*/
#include<iostream>
#include<conio.h>
using namespace std;
void pedir();
void menorElemento(int  m[100][100],int,int);
int m[100][100],filas,columnas,mayor=-9999,menor=9999;
int main(){
	pedir();
	 menorElemento(m,filas,columnas);
	cout<<"El mayor elemeto es: "<<mayor<<endl;
	cout<<"El menor elemeto es: "<<menor;
		getch();
	return 0;
}
void pedir(){
	cout<<"Dijite el numero de filas: ";cin>>filas;
	cout<<"Dijite el numero de columnas: ";cin>>columnas;
	for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
		cout<<"Dijite los elemtos de la matriz["<<i<<"]["<<j<<"]: ";cin>>m[i][j];
	}
	}
}
/*Trata de identar como lo hice ayuda a visualizar mejor , el error estaba en la linea 8
 Cambie los valores inicales , recuerda que cuando creas una variable esta tiene un valor basura
 y si tienes mala suerte sale  0 o menor jamas entrara a los condicionales si que cuando vayas a
 poner menor o mayor siempre inicialos con el valor contrario es decir al mayor con un numero super
pequeño y al menor con un valor super grande */

void menorElemento(int m[][100],int filas,int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){ 
			if(mayor<m[i][j]){
				mayor=m[i][j];
			}
			if((menor>m[i][j])){
				menor=m[i][j];
			}
		}		
}
}
