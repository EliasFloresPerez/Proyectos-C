#include <iostream>


using namespace std;

int main(){
	int tamano = 0;
	int valor = 6;
	int incremento = 6;
	
	cout<<"\nDame el numero de veces :";
	cin>>tamano;
	
	
	for(int i = 0;i<tamano;i++){
	
		cout<<valor<<" ,";
		valor +=incremento; 
		incremento +=2;
		
	}
	
	
	
	return 0;
}
