#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	float P1,P2,P3,PT=0,Prueba,Trabajo,Promedio;
	cout<<"\nDame la nota del primer parciale\n";
	cin>>P1;
	cout<<"\nDame la nota del segundo parcial\n";
	cin>>P2;
	cout<<"\nDame la nota del tercer  parcial\n";
	cin>>P3;
	PT=(P1+P2+P3)/3;
	cout<<"\nDame la calificacion de la prueba sorpresa\n";
	cin>>Prueba;
	cout<<"\nDame la calificacion del trabajo final\n";
	cin>>Trabajo;
	PT=(PT*55)/100;
	Prueba=(Prueba*30)/100;
	Trabajo=(Trabajo*15)/100;
	Promedio=PT+Prueba+Trabajo;
	cout<<"Su nota final es :"<<Promedio<<endl;
	
	
	getch();
	return 0;
}
