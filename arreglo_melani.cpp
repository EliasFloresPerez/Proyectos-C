#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	//agregando las variables a utilizar
	int arreglo[15], arreglo_par[15], arreglo_impar[15];
	int numeros,indice,auxiliar=1,contador_par=0,contador_impar=0;
	
	//pidiendo los numeros a ingresar
	do{
		cout<<"Cuantos datos quieres ingresar? entre 0 a 15 :";
		cin>>numeros;	
	}while(numeros<0||numeros>15);
	
	//Ingresando los valores
	for(int i=0;i<numeros;i++){
		cout<<"Deme el #"<<i+1<<" del arreglo :";
		cin>>arreglo[i];
	}
	
	//agregando los valores aleatorios
	//Pidiendo el indice
	if(numeros==0&&numeros==15){
	
		do{
			cout<<"Dime en indice para autocompletar [0-"<<numeros<<"] :";
			cin>>indice;
			
		}while(indice<0||indice>numeros);
	}else{
		indice=numeros;
	}
	
	//Moviendo los datos hacia adelante
	for(int i=14;i>indice;i--){
		arreglo[i]=arreglo[numeros-auxiliar];
		auxiliar++;
	}
	//Agregando valores aleatorios
	for(int i=indice;i<indice+15-numeros;i++){
		arreglo[i]=rand()%50+1;
	}
	
	//Separando el vector original en pares e impares
	
	for(int i=0;i<15;i++){
		if((arreglo[i]%2)==0){
			arreglo_par[contador_par]=arreglo[i]+2;
			contador_par++;
		}else{
			arreglo_impar[contador_impar]=arreglo[i];
			contador_impar++;
		}
	}
	//imprimiendo los 3 vectores
	cout<<"\nVector original\n";
	for(int i=0;i<15;i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<"\nVector par"<<endl;
	for(int i=0;i<contador_par;i++){
		cout<<arreglo_par[i]<<" ";
	}
	cout<<"\nvector impar"<<endl;
	for(int i=0;i<contador_impar;i++){
		cout<<arreglo_impar[i]<<" ";
	}
	
	return 0;
}
