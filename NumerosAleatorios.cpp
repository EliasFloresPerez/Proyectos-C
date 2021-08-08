#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int numeros[100];
	int total=0;
	srand(time(0));
	
//Creando los numeros
	for(int x=0;x<50;){
		numeros[x]=(rand()%7);
		if(numeros[x]>=2){
			x++;
		}
	}
	//Imprimir los numeros 
	for(int x=0;x<50;x++){
		cout<<x+1<<") "<<numeros[x]<<endl;
	}
	//Contarlos 
	for(int x=0;x<50;x++){
		if(numeros[x]>=4){
			total++;
		}
	}
	cout<<"\nHay un total de :"<<total<<"  numeros mayores o iguales que 4 en tu arreglo";
	
	return 0;
}
