#include <iostream>
using namespace std;

int main(){
	int calificaciones[5];
	int notamayor=0,notamenor=999;
	float promedio=0;
	for(int i=0;i<5;){
		cout<<"\nDame la calificacion #"<<i+1<<" :";
		cin>>calificaciones[i];
		if(calificaciones[i]>=0&&calificaciones[i]<=100){
			if(notamayor<calificaciones[i]){
				notamayor=calificaciones[i];
			}
			if(notamenor>calificaciones[i]){
				notamenor=calificaciones[i];
			}
			promedio+=calificaciones[i];
			i++;
		}else{
			cout<<"\nSelecione una calificacion valida";
		}
	}
	cout<<"Las calificaciones son :";
	for(int i=0;i<5;i++){
		cout<<calificaciones[i]<<" ";
	}
	promedio=promedio/5;
	cout<<"\nEL promedio es :"<<promedio;
	cout<<"\nLa nota mas alta es :"<<notamayor;
	cout<<"\nLa nota mas baja es :"<<notamenor;


	
	
	return 0;
}
