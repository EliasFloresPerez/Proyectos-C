#include <iostream>
using namespace std;

int main(){
	int calificaciones[5];
	int n=0;
	for(int i=0;i<5;){
		cout<<"\nDame la calificacion";
		cin>>calificaciones[i];
		if(calificaciones[i]>=0&&calificaciones[i]<=100){
			i++;
		}else{
			cout<<"\nSelecione una calificacion valida";
		}
	}


	
	
	return 0;
}
