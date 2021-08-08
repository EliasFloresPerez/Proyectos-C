#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char nombre[50];
	int numero;
	
	
	for(int i =0; i<15 ;i++){
		cout<<"\nDame el nombre :";
		gets(nombre);
		cout<<"Dame un numero:";
		cin>>numero;
	}
	
	cout<<endl<<nombre<<numero;
	return 190;
}
