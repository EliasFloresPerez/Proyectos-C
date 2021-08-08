#include <iostream>
#include <stdlib.h>
 using namespace std;
 
 class Persona{
 	//atributos
 	private :
 	int edad;
 	string nombre;
 	//metodos
 	public:
 	Persona(int,string);
 	void leer();
 	void correr();
 };
 //contructor
 Persona::Persona(int _edad,string _nombre){
 	edad = _edad;
 	nombre = _nombre;
 }
 //funciones
 void Persona::leer(){
 	cout<<"Yo "<<nombre<<" de "<<edad<<" años estoy leyendo un libro\n";
 }
 void Persona::correr(){
 	cout<<"Yo "<<nombre<<" de "<<edad<<" años estoy corriendo\n";
 }
 
 int main(){
 	Persona p1=Persona(20,"Elias");
 	Persona p2(24,"maria");
 	p1.leer();
 	p1.correr();
 	p2.leer();
 	
 	system("pause");
 	return 0;
 }
 
