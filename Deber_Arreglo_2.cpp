#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	srand(time(0)); // para usar numeros aleatorios
	//Creacion de las variables a utilizar
	int vector_total[15], vector_par[15], vector_impar[15];
	int contador_par=1,contador_impar=0, auxiliar,indice;
	
	//Pidiendo al usuario cuantos datos deseas ingresar
	do{
	cout<<"Cuanto datos deseas ingresar al vector?(entre 0-15):";
	cin>>indice;
	}while(indice<0||indice>15);
	//Ingreando la cantidad de datos que el usuario desea
	cout<<"\n\t\tIngresando datos...\n";
	
	for(int i=0;i<indice;i++){
		cout<<"Valor #"<<i+1<<" :";
		cin>>vector_total[i];
		
	}
	
	//Autocompletando el vector
	
	//Primero pedimos donde los desea ingresar
	
	if(indice>0&&indice<15){
		do{
		
		cout<<"\nEn que indice desea autocompletar el vector? [0-"<<indice<<"] : ";
		cin>>auxiliar;
		}while(auxiliar<0||auxiliar>indice);
	}
	else{
		auxiliar = indice;
	}
	
	//Segundo los valores desde el indice dado se recorren hacia adelante
	
	for(int i = 14;i>auxiliar;i--){
		vector_total[i]=vector_total[indice-contador_par];
		contador_par++;
	}

	//Tercero LLenar el vector con los numeros faltantes
	
	for(int i=auxiliar;i<auxiliar+15-indice;i++){
		vector_total[i]=rand()%20;
	}
	
	//Luego debemos agregar los pares e imapres a su vector correspondiente
	contador_par=0;
	for(int i=0;i<15;i++){
		if((vector_total[i]%2)==0){
			vector_par[contador_par]=vector_total[i]+2;
			contador_par++;
		}
		else{
			vector_impar[contador_impar]=vector_total[i];
			contador_impar++;
		}
	}
	
	//Para terminar solos nos queda imprimir los tres vectores
	cout<<"\tVector Original :\n[";
	for(int i =0;i<15;i++){
		cout<<vector_total[i]<<" ";
	}
	
	cout<<"]\n\tVector Par:\n[";
	
	if(contador_par!=0){
		for(int i =0;i<contador_par;i++){
			cout<<vector_par[i]<<" ";
		}
	}else{
		cout<<"Vector par vacio";
	}
	
	cout<<"]\n\tVector impar: \n[";
	
	if(contador_impar!=0){
	
		for(int i =0;i<contador_impar;i++){
			cout<<vector_impar[i]<<" ";
		}
	}else{
		cout<<"Vector impar vacio";
	}
	cout<<"]";
		
	
	
	return 0;
}
