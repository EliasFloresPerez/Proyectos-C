#include <iostream>
using namespace std;

int main(){
	int fila,columna;
	int bandera=0;
	do{
	
	cout<<"\nDame la fila";
	cin>>fila;
	cout<<"\nDame la columna";
	cin>>columna;
	}while(fila==0||columna==0);
	int matriz[fila][columna];
	if(fila==columna){
		for(int i=0;i<fila;i++){
			for(int j=0;j<columna;j++){
				cout<<"\nDame la posicion ["<<i<<"]["<<j<<"]";
				cin>>matriz[i][j];
			}
		}
		for(int i=0;i<fila;i++){
			for(int j=0;j<columna;j++){
				cout<<"["<<matriz[i][j]<<"] ";
			}
			cout<<endl;
		}
		cout<<endl;
		for(int i=0;i<fila;i++){
			for(int j=0;j<columna;j++){
				cout<<"["<<matriz[j][i]<<"] ";
			}
			cout<<endl;
		}
		for(int i=0;i<fila;i++){
			for(int j=0;j<columna;j++){
				if(matriz[i][j]==matriz[j][i]){
					
				}else{
					bandera=1;
				}
			}
		}
		
		if(bandera==0){
			cout<<"simetrica y transpuesta";
		}else{
			cout<<"Solo simetrica";
		}
		
	}else{
		cout<<"Ni es cuadrada tu hvda";
	}
	
	
	
	
	
	return 0;
}
