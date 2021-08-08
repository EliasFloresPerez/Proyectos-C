#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Nodo{
	int dato;
	struct Nodo *siguiente;
}alumno;

int main(){
	int *p;
	int n,i=0,e=0;
	do{
	i=0;
	system("cls");
	cout<<"Dame n\n"; cin>>n;

	p=(int*)malloc(n*sizeof (int));
	for(int a=0;a<n;a++){
		cout<<"Quieres ingresar un dato?\n"; cin>>e;
		if(e){
		
		cin>>(*(p+a));
		
		}
	}
	for(int a=0;a<n;a++){
		cout<<(*(p+a))<<" ";
	}
	cout<<"\nQuieres terminar?\n"; cin>>i;
	}while(!i);
	delete[]p;
	
	return 0;
}
