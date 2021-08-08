#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Animal{
	private:
		string nombre;
		int edad;
	public:
		Animal(string,int);
		virtual void hablar();
};

class Humano : public Animal{
	private :
		int cedula;
	public :
		Humano(string,int,int);
		void hablar();
};

class Perro : public Animal{
	private :
		int codigo;
	public:
		Perro(string,int,int);
		void hablar();
};
  
  Animal::Animal(string _nombre,int _edad){
  	nombre = _nombre;
  	edad = _edad;
  }
  void Animal::hablar(){
  	cout<<"\nYameteKudasai"<<endl;
  } 
  Humano::Humano(string _nombre,int _edad,int _cedula) : Animal(_nombre,_edad){
  	cedula = _cedula;
  }
  
  void Humano::hablar(){
  	cout<<"\nSnk es el mejor anime"<<endl;
  }
  
  Perro::Perro(string _nombre,int _edad,int _codigo) : Animal(_nombre,_edad){
  	codigo = _codigo;
  }
  
  void Perro::hablar(){
  	cout<<"\nHOla k hace digo Gua Gua!"<<endl;
  }


int main(){
	Animal *animales[3]; 
	
	animales[0] = new Humano("Elias",20,077654);
	animales[1] = new Perro("Joseph",17,55566);
	animales[2] = new Animal("Vaca",999);
	
	animales[0]->hablar();
	animales[1]->hablar();
	animales[2]->hablar();
	
	return 0;
}
