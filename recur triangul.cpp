#include <iostream>
void triangulo(int,int);
int main(){
	int numero;
	std::cout<<"Dame un numero :"; std::cin>>numero;
	triangulo(numero,numero);
	return 0;
}
void triangulo(int numero,int aux){
	if(numero<0){}else{
		for(int i=0;i<numero;i++){
			std::cout<<" ";	}
		for(int i=0;i<(aux-numero)*2+1;i++){
			std::cout<<"*";
		} std::cout<<"\n";
		triangulo(numero-1,aux);}
		}
