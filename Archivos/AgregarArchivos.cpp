#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void agregar();
int main(){
	agregar();
	system("pause");
	return 0;
}
void agregar(){
	ofstream archivo;
	string texto;
	archivo.open("programacion.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se pudo";
		exit(1);
	}
	//archivo<<"Hola que tal";
	cout<<"Texto a ingresar";
	getline(cin,texto);
	archivo<<texto<<endl;
	archivo.close();
}
