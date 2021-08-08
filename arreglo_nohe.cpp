#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <windows.h>


using namespace std;
 int main(){
 	srand(time(0));
 	system("cls");
 	int arreglo_total[15],arreglo_par[15],arreglo_impar[15];
 	int numero, indice , auxiliar=1 ,contador_p=0,contador_i=0;
 	
 	//Pidiendo los datos a agregar
 	printf("\033[0;36m");
 	do{
 		cout<<"\tCuantos datos vas a ingresar? :";
 		cin>>numero;
	 }while(numero<0||numero>15);
	 
	 //Ingresandolos
	 
	 for(int x=0;x<numero;x++){
	 	cout<<"\nDame el valor a ingresar :";
	 	cin>>arreglo_total[x];
	 }
	 
	 //Pidiendo el indice para ingresar los datos
	 printf("\033[0;31m");
	 if(numero!=0&&numero!=15){
	 	do{
	 	cout<<"\nDonde vas a ingresar los numeros , para autocmpletar [0-"<<numero<<"] :";
	 	cin>>indice;
	 	}while(indice<0||indice>numero);
	 }else{
	 	indice=numero;
	 }
 	
 	//Moviendo los datos hacia adelante
 
	for(int x=14;x>indice;x--){
		arreglo_total[x]=arreglo_total[numero-auxiliar];
		auxiliar++;
	}
 	
 	//Autocompletando los valores
 	for(int x=indice;x<indice+15-numero;x++){
		arreglo_total[x]=rand()%25;
	}
 	
 	//Agregando los valores pares e impares a sus respectivos arreglos
 	for(int x=0;x<15;x++){
		if((arreglo_total[x]%2)==0){
			arreglo_par[contador_p]=arreglo_total[x]+2;
			contador_p++;
		}else{
			arreglo_impar[contador_i]=arreglo_total[x];
			contador_i++;
		}
	}
	
	//Imprimiendo valores
	printf("\033[0;34m");
	cout<<"\n\t\t>>>>Arreglo total<<<<<\n\n\t[";
	for(int x=0;x<15;x++){
		cout<<arreglo_total[x]<<" ";
	}
	printf("]\033[0;32m");
	cout<<"\n\n\t\t>>>> Arreglo  Par<<<<<\n\n\t[";
	for(int x=0;x<contador_p;x++){
		cout<<arreglo_par[x]<<" ";
	}
	printf("]\033[0;31m");
	cout<<"\n\n\t\t>>>>Arreglo Impar<<<<<\n\n\t[";
	for(int x=0;x<contador_i;x++){
		cout<<arreglo_impar[x]<<" ";
	}
	printf("]\033[0;33m");
	cout<<"\n\t\t\t>>>FIN DE PROGRAMA<<<";
	printf("\033[0;37m");
	
 	
 	
 	
	return 0;
 }
