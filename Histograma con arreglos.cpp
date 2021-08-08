#include <iostream>
#include <conio.h>
using namespace std;
void dibujar(int datos[],int n);

int main(){
	int numero[20];
	bool respuesta=false;
	for(int i=0;i<10;){
		respuesta=false;
		while(!respuesta){
			cout<<"\n"<<i+1<<")Dame un numero entre el  1 al 20: ";
			cin>>numero[i];
			if(numero[i]>20||numero[i]<1){
				cout<<"\n\nEl numero no esta en el rango requerido,porfavor ingrese un numero valido...";
			}else{
				i++;
				respuesta=true;
			}
			
		}
		system("cls");
	}
	dibujar(numero,10);
	getch();
	return 0;
}
void dibujar(int datos[],int n){
	
	for(int i=20;i>0;i--){

		for(int j=0;j<10;j++){
			
			if(datos[j]>=i){
				cout<<"\t*";
			}else{
				cout<<"\t";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<10;i++){
		cout<<"\t"<<datos[i];
	}
}

