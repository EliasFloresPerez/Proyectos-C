/* Nombre : Melanie Gisella Andrade Vera

   Carerra : Fundamentos en promgracion C2
   
   1. Crear un programa para sumar los dígitos de número entero, de forma recursiva. 
*/  

#include <iostream>
#include <stdlib.h>

using namespace std;

int suma_de_digitos(int);

int main(){
	int numero;
	//se pide el numero
	cout<<"\nIngrese el numero : ";
	cin>>numero;
	//Se imprime y llama a la funcion suma_de_digitos
	cout<<"\nLa suma de los digitos es : :"<<suma_de_digitos(numero);
	cout<<endl;
	system("pause");
	return 0;
}

int suma_de_digitos(int n){
	if(n==0){
		return 0;
	}
	//Se coge el modular y se le pasa el numero entre 10 para eliminar el ultimo digito
	return n%10+suma_de_digitos(n/10);
}
