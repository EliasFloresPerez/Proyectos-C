#include <iostream>

using namespace std;

int main(){
	int matriz[7][3];
	int suma_dia = 0;
	
	for(int i=0;i<7;i++){
		for(int j=0;j<3;j++){
			cin>>matriz[i][j];
			suma_dia = suma_dia + matriz[i][j];
		}
	}
	
	cout<<"\n.: Promedios de cada dia :.";
	cout<<"\nLunes:     "<<(matriz[0][0]+matriz[0][1]+matriz[0][2])/3;
	cout<<"\nMartes:    "<<(matriz[1][0]+matriz[1][1]+matriz[1][2])/3;
	cout<<"\nMiercoles: "<<(matriz[2][0]+matriz[2][1]+matriz[2][2])/3;
	cout<<"\nJueves:    "<<(matriz[3][0]+matriz[3][1]+matriz[3][2])/3;
	cout<<"\nViernes:   "<<(matriz[4][0]+matriz[4][1]+matriz[4][2])/3;
	cout<<"\nSabado:    "<<(matriz[5][0]+matriz[5][1]+matriz[5][2])/3;
	cout<<"\nDomingo:   "<<(matriz[6][0]+matriz[6][1]+matriz[6][2])/3;
	
	cout<<"\nPromedio total de la semana :"<< suma_dia/21;
	
	
	
	return 0;
}
