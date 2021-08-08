#include <iostream>

using namespace std;

int main(){
	int a=5 , b=2 , c=0; //Creamos la variables
	c=a*b; 				// c sera igual a el resultado de a por b
	a++;                // la variable aumenta en uno
	b=b-2;              //b sera igual a si misma menos 2
	if(a==b){			//comparando a con b
		cout<<"Son iguales";
	}else{
		cout<<"No son iguales";
	}
	
	For(int i;i<a;i++){	//Si se vuelve a poner for el error se va
		c=a*(b+i);
	}
	return 0;
}
