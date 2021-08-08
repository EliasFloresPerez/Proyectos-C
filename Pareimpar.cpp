#include <iostream>
using namespace std;

int main(){
	int numero; // Creamos la variable 
	cout<<"\nIngrese un numero";
	cin>>numero; //Pedimos el numero a evaluar
	if(!(numero%2)){ // Evaluamos el numero sacando su modular
		cout<<"El numero es Par";
	}else{			//Si es Falso mostrara que es Impar
		cout<<"El numero es Impar";
	}	
	return 0;
}
