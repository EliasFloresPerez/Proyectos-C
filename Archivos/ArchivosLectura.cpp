#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;
void lectura();

int main(){
	lectura();
	
	return 0;
}
void lectura(){
	ifstream archivo;
	string texto;
	archivo.open("programacion.txt",ios::in);// ios::in solo lectura
	if(archivo.fail()){
		cout<<"\n no se pudo";
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
}
