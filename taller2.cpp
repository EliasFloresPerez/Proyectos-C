#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int total;
	int entero=0;
	float decimales = 0;
	int auxiliar;
	cout<<"cuantos numero anturales deseas poner?";
	cin>>total;
	float numero[total];
	
	
	for(int i=0;i<total;i++){
		cout<<"Dame el numero "<<i+1<<" "<<endl;
		cin>>numero[i];
		auxiliar =numero[i];
		entero += auxiliar;
		decimales += numero[i]-auxiliar;
	}
	cout<<"Total de enteros :"<<entero;
	cout<<"\nTotal de decimales :"<<decimales<<endl;
	
	system("pause");
	return 0;
}
