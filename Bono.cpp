#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long int bono,suma=0;
	int cantidad,sueldo[10],aux=0,pos;
	//Pedir Datos
	do{
		cin>>bono;
		cin>>cantidad;
		suma=0;
		if(cantidad>0){
		for(int i=0;i<cantidad;i++){
			cin>>sueldo[i];
			suma+=sueldo[i];	
		}
		}
		
	}while(bono<=0||bono>10000||cantidad>10||cantidad<=0||suma>pow(2,30));
	//Ordenamiento menor a mayor
	for(int i=0;i<cantidad;i++){
		pos=i;
		aux=sueldo[i];
		while((pos>0)&&(sueldo[pos-1]>aux))
		{
		sueldo[pos]=sueldo[pos-1];
		pos--;
		}
	sueldo[pos]=aux;
	}
	aux=cantidad;
	for(int i=0;i<cantidad;i++){
		pos=bono/aux;
		if(pos>sueldo[i]){
			aux--;
			bono-=sueldo[i];
		}
		else{
			sueldo[i]=pos;
			bono-=sueldo[i];
			aux--;
		}
		
	}
	cout<<pos-bono;
return 0;	
}
