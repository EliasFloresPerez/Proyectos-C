#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	//Creando las variables a utilizar
	float calificacion_1 , calificacion_2 , calificacion_3 , calificacion_4 , promedio;
	//Variable bandera nos ayudara para saaber si una calificacion no esta en el rango de 0  a 100
	int bandera = 0;
	
	do{
		//Si bandera cambio a  1  le informa al usuario que ingreso una calificacion incorrecta
		if(bandera==1){
			system("cls"); //funcion que me permite limpiar 
			cout<<"\nIngresaste una calificacion incorrecta , porfavor ingrese en el rango de 0-100\n";
		}
		bandera = 0;
		cout<<"\n1] Deme la primera calificacion del estudiante : ";
		cin>>calificacion_1;
		if(calificacion_1>100||calificacion_1<0){
			bandera = 1;
		}
		
		cout<<"\n2] Deme la segunda calificacion del estudiante : ";
		cin>>calificacion_2;
		if(calificacion_2>100||calificacion_2<0){
			bandera = 1;
		}
		
		cout<<"\n3] Deme la tercera calificacion del estudiante : ";
		cin>>calificacion_3;
		if(calificacion_3>100||calificacion_3<0){
			bandera = 1;
		}
		
		cout<<"\n4] Deme la cuarta calificacion del estudiante : ";
		cin>>calificacion_4;
		if(calificacion_4>100||calificacion_4<0){
			bandera = 1;
		}
		
		
		
	}while(bandera!=0);
	
	//Promedio es igual a la suma de las calificaciones sobre  4
	promedio =  (calificacion_1 + calificacion_2 + calificacion_3 +calificacion_4)/4;
	
	cout<<"\nHola. Tu promedio es : "<<promedio<<"\n";
	
	if(promedio >= 70){
		cout<<"Felicidades.Aprobaste.";
	}else{
		cout<<"Losiento Reprobaste.";
	}
	
}
