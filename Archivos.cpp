#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();

int main(){
	escribir();
	
	
	return 0;
	system("pause");
}
void escribir(){
	ofstream archivo;
	archivo.open("PrimerArchivo.txt",ios::out);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo<<;
	archivo.close();
}
