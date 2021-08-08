#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Perro{
	private:
	string nombre,raza;
	public:
	Perro(string,string);
	~Perro();
	void mostrar();
};
//Constructor inicializa las variables o atributos
Perro::Perro(string _nombre,string _raza){
	nombre = _nombre;
	raza = _raza;
}
//Destructor destruye todos los objetos de una clase no es necesaria declararla en la funcion principal
Perro::~Perro(){
	cout<<"\nSe murio "<<nombre;
}
void Perro::mostrar(){
	cout<<"\nTu perro se llama "<<nombre<<" y su raza es "<<raza;
}


int main(){
	Perro perro1("nena","shitxu");
	perro1.mostrar();
	return 0;
}
