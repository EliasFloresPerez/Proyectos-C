#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();
};

class Alumno : public Persona{ // Para poder usar los metodos publicos pero tambien se heredan los atributos
	private :
		string colegio;
		float nota;
	public :
		Alumno(string,int,string,float);
		void mostrarAlumno();
	
};
//Persona
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}
void Persona::mostrarPersona(){
	cout<<"\nNombre :"<<nombre;
	cout<<"\nEdad :"<<edad;
}
//Alumno
Alumno::Alumno(string _numbre,int _edad,string _colegio,float _nota): Persona(_numbre,_edad) {//mando a llamar al constructor 
	colegio = _colegio;
	nota = _nota;
}
void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"\nColegio : "<<colegio;
	cout<<"\nNota Final :"<<nota;
}


int main(){
	Alumno alumno1("Elias",20,"Los Vergeles",10);
	alumno1.mostrarAlumno();
	
	return 0;
}
