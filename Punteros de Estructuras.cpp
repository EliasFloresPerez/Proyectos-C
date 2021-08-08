#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
	int cedula;
	char ciudad[30];
}persona,*p_persona=&persona;//IMPORTANTE!!!!!
void pedirDatos();
void mostrar(Persona*);

int main(){
	pedirDatos();
	mostrar(p_persona);
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Deme su nombre porfavor: ";
	cin.getline(p_persona->nombre,30,'\n');
	cin.ignore();
	cout<<"\nDeme su edad: ";
	cin>>p_persona->edad;
	cout<<"\nDeme su cedula: ";
	cin>>p_persona->cedula;
	cin.ignore();
	cout<<"\nDe donde es?: ";
	cin.getline(p_persona->ciudad,30,'\n');
}
void mostrar(Persona *persona){
	cout<<"Nombre :"<<persona->nombre<<endl;
	cout<<"Edad: "<<persona->edad;
	cout<<"\nCedula: "<<persona->cedula;
	cout<<"\nSu ciudad es :"<<persona->ciudad;
}
