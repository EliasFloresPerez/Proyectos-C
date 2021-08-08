#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
	char palabra[50];
	int posicion=0,longitud=0,b=0;
	cout<<"Dame la palabra que vas a ingresar\n"; cin>>palabra;

	longitud=strlen(palabra);
	for(int x=0;x<longitud;x++){
		if(palabra[x]=='.'){
			b=1;
			cout<<"\nEl punto esta ubicado en la posicion: "<<x+1<<" de la palabra";
		}
	}
	if(b==0){
		cout<<"\nNo se encontraron puntos en su palabra";
	}
    cout<<endl;
    system("pause");
return 0;
}
