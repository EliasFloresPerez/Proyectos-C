#include<iostream>
#include<windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Nodo{
	string nombre;
	int tamano;
	Nodo *siguiente;
};

void insertarLista(Nodo*&,string);
void mostrarLista(Nodo *,Nodo *& ,int,int);
int calcular_tamano(string);
void listar_directorio(char* dir,Nodo*&lista){
    WIN32_FIND_DATA wfd;//subnombre wfd, aqui se almacena informacion del archivo o carpeta
    HANDLE hFind;//subnombre hFi, manejador al archivos o carpeta
    char szCurrentPath[MAX_PATH];
    char szNextPath[MAX_PATH];

    strcpy(szCurrentPath,dir);
    strcat(szCurrentPath,"\\*.*");

    hFind = FindFirstFile(szCurrentPath, &wfd);

    if(hFind == INVALID_HANDLE_VALUE)
        cout<<"Ruta Incorrecta"<<endl;
    else{
        do{
            if(!strcmp(wfd.cFileName, ".") || !strcmp(wfd.cFileName, ".."))
                continue;
            
            //cout<<wfd.cFileName<<endl;
            insertarLista(lista,wfd.cFileName);
        

            if(wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY){
                wsprintf(szNextPath,"%s\\%s",dir,wfd.cFileName);
                listar_directorio(szNextPath,lista);
            }
        }while(FindNextFile(hFind,&wfd) != 0);
    }
}



int main(){
	Nodo *lista=NULL;
    char dir[MAX_PATH];

    cout<<"Ingrese la ruta a explorar: ";
    cin.getline(dir, MAX_PATH);
    cout<<endl;

	
    listar_directorio(dir,lista);// C:
    mostrarLista(lista,lista,0,0);
    system("pause");
}

void insertarLista(Nodo*&lista,string n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->nombre=n;
	Nodo *aux1=lista;
	Nodo *aux2;
	while((aux1!=NULL)&&(aux1->nombre<n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista==aux1){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
}

void mostrarLista(Nodo *lista,Nodo *&actual,int contador,int contador_T){

	int auxiliar=0,bandera = 1;
	if(actual!=NULL){
			while(auxiliar<20) {
			if(actual->nombre[auxiliar]=='e'){
				if(actual->nombre[auxiliar+1]=='x'){
					if(actual->nombre[auxiliar+2]=='e'){
						contador = contador +1;
						bandera = 0;		
						cout<<actual->nombre<<"      ";
						cout<<calcular_tamano(actual->nombre)<<"KB"<<endl;
						contador_T= contador_T + calcular_tamano(actual->nombre);
					}
				}
			}
			auxiliar = auxiliar + 1;
		}
		actual=actual->siguiente;
		mostrarLista(lista,actual,contador,contador_T); //Recursividad
	}else{
		cout<<"Hay un total de "<<contador<<" de archivos .exe\n";
		cout<<"Y el tamano total de todos ellos es de "<<contador_T<<" KB\n";
	}
	
}

int calcular_tamano(string nombre){
	int tamano=0,aux=0;
	char cadena[20];
	FILE *fich;
	
	while(nombre[aux] != 0){
		cadena[aux]= nombre[aux];
		aux=aux+1;
	}
	fich=fopen(cadena,"r");
	
	fseek(fich, 0L, SEEK_END);
	tamano=ftell(fich)/1000;
	fclose(fich);
	return tamano;
  
}



