#include <iostream>
#include <string.h>
#include <stdlib.h>
 using namespace std;
 
 int main(){
 	float notas[5];
 	string nombres[5];
 	
 	for(int i=0;i<5;i++){
 		system("cls");
 		cout<<"Dame el nombre del "<<i+1<<" estudiante :";
 		cin>>nombres[i];
 		cout<<endl;
 		cout<<"Dame la nota  del estudiante :";
 		cin>>notas[i];	
	 }
	for(int i=0;i<5;i++){
 		cout<<"Nombre :"<<nombres[i]<<"  Nota: "<<notas[i]<<endl;
	 }
 	
 	
 	
 	return 0;
 }
