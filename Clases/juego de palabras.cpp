#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Persona{
	private://Atributos
	string nombre;
	int edad;
	float peso;
	
	public://Metodos
	Persona(string,int,float);
	virtual void mostrar();
};

class Estudiante:public Persona{
	private:
	string colegio;
	float promedio;
	public:
	Estudiante(string,int,float,string,float);
	void mostrar();	
};
Estudiante::Estudiante(string _nombre,int _edad,float _peso,string _colegio,float _promedio):Persona(_nombre,_edad,_peso){
	colegio = _colegio;
	promedio = _promedio;
}

void Estudiante::mostrar(){
	cout<<"Soy un estudiante"<<endl;
	Persona::mostrar();
	cout<<"\n y mi promedio es "<<promedio<<" y estudio en la "<<colegio<<endl;
}

Persona::Persona(string _nombre,int _edad, float _peso ){
	nombre = _nombre;
	edad = _edad;
	peso = _peso;
}
void Persona::mostrar(){
	cout<<"Hola me llamo "<<nombre<<" tengo "<<edad<<" y peso :"<<peso<<endl;
}


int main(){
	string name,colegio2;
	int edad2;
	float promedio2,peso2;
	
	cout<<"Dame el nombre :";
	cin>>name;
	cout<<"\nLa edad";
	cin>>edad2;
	cout<<"\npromedio:";
	cin>>promedio2;
	cout<<"\npeso:";
	cin>>peso2;
	cout<<"\nColegio:";
	cin>>colegio2;
	
	Estudiante p1=  Estudiante(name,edad2,peso2,colegio2,promedio2);
	p1.mostrar();	
	
	
}
