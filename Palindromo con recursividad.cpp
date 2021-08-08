/* Nombre : Melanie Gisella Andrade Vera

   Carerra : Fundamentos en promgracion C2
   
   2.-Desarrollar un programa donde se ingrese una cadena por teclado y por medio de una
   funci�n recursiva determine si la cadena es pal�ndroma. Mostrar por pantalla el respectivo
   mensaje.	
*/   

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

bool palindromo(char * ,int,int);

int main(){
	char palabra[50] , palabra2[50];
	int aux=0,tamano;
	
	//Primero llenamos de valores nulos
	for(int  i = 0; i<50 ;i++){
		palabra[i] = 0;
		palabra2[i] = 0;
	}
	
	//Pido la palabra a evaluar
	cout<<"\nDame una palabra  : ";
	cin.getline(palabra,50,'\n');
	
	//Guardo el tama�o de la cadena 
	tamano = strlen(palabra);
	
	
	//Luego copio la primera cadena en la segunda sin los espacios
	for(int i = 0; i<tamano;i++){
		if(palabra[i] == ' '){
			
		}else{
			palabra2[aux]=palabra[i];
			aux +=1;
		}
	}
	//Vuelvo a guardar el tama�o de la cadena
	tamano = strlen(palabra2);
	
	//Evaluando la cadena
	if(palindromo(palabra2,tamano,0)){
		cout<<"\nLa palabra ES palindromo";
	}else{
		cout<<"\nLa palabra NO es palindromo";
	}
	cout<<endl;
	system("pause");
	return 0;
}

bool palindromo(char *cadena , int tamano ,int inicio){
	
	if(inicio >= tamano){
		return true;
	}
	
	if(cadena[inicio] == cadena[tamano-1]){
		palindromo(cadena,tamano-1,inicio+1);
		
	}else{
		return false;
	}
}














