#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
void funcion(int arreglo[],int n){
	for(int i = 0;i<n;i++){
		cout<<"["<<arreglo[i]<<"] ";
	}
}

int main(){
	srand(time(0));
	int vector_uno[15]; //arreglo original
    //variables que nos ayudaran a pedir datos y guardarlos
	int auxiliar,numero,contador_par = 0,contador_impar = 0,c=1; 
	
	//Pedimos al usuario cuantos datos va a agregar
	do{
		system("cls");
		cout<<"\n\t\tCuantos datos desea ingresar? : ";
		cin>>numero;
	}while(numero<0||numero>15);
	
	//Creamos el bucle para pedir los datos
	for(int i = 0;i<numero;i++){
		system("cls");
		cout<<"\t\t\t.:Pidiendo Datos:.\n";
		cout<<"\t\tDeme el valor #"<<i+1<<" que va a ingresar : ";
		cin>>vector_uno[i];
	}
	// Llenamos el vector en el indice que el usuario quiere
	if(numero>0&&numero<15){
		do{
			system("cls");
			cout<<"\n\t\tEn que indice desea agregar los valores( entre 0 y "<<numero<<") :";
			cin>>auxiliar;
		}while(auxiliar<0||auxiliar>numero);
	}else{
		auxiliar=numero;
	}
	
	//Agregamos los valores random en el indice indicado por el usuario
	for(int i = 14; i>auxiliar ;i--){
		vector_uno[i]=vector_uno[numero-c];
		c++;
	}
	
	for(int i=auxiliar ;i<auxiliar+15-numero;i++){
		vector_uno[i]=(rand()%10)+1;
	}
	// Bucle para saber cuantos pares e impares hay
	for(int i=0;i<15;i++){
		if((vector_uno[i]%2)==0){
			contador_par++;
		}else{
			contador_impar++;
		}
	}
	// creacion de los arreglos para guardar los valores pares e impares
	int vector_par[contador_par],vector_impar[contador_impar];
	
	//Separar pares e impares
	contador_par=0;
	contador_impar=0;
	for(int i=0;i<15;i++){
		if((vector_uno[i]%2)==0){
			vector_par[contador_par]=vector_uno[i];
			contador_par++;
		}else{
			vector_impar[contador_impar]=vector_uno[i];
			contador_impar++;
		}
	}
	//imprimiendo vectores
	system("cls");
	cout<<"\n\t\t\t\t\t\t.:Datos:.\n\t\t\t\t\tNumeros ingresados :"<<numero;
	cout<<"\n\t\t\t\t\tValores random ingresados :"<<15-numero;
	cout<<"\n\t\t\t\t\tIngresados en la posicion: "<<auxiliar<<"\n";
	cout<<"\n\t\t\t\t.:Vector original:.\n\n\t\t";
	funcion(vector_uno,15);
	cout<<"\n\n\t\t\t\t.:Vector par:.\n\n\t\t";
	funcion(vector_par,contador_par);
	cout<<"\n\n\t\t\t\t.:Vector impar:.\n\n\t\t";
	funcion(vector_impar,contador_impar);
	
	cout<<endl<<endl;
	system("pause");
	return 0;
}
