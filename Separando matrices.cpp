#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int n,q,z,q_inicio,q_fin,z_inicio,z_fin;
	//Variables auxiliares
	int a=0,b=0;
	
	//Restricciones
	do{
		cin>>n;	
	}while(n<4||n>100||!((n%2)==0));
	int matriz[n][n];
	int vector_1[n/2][n/2],vector_2[n/2][n/2],vector_3[n/2][n/2];
	
	//Pidiendo los datos
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matriz[i][j];	
		}
	}
	
	//Pidiendo los indices
	cin>>q;
	cin>>z;
	//Asignado las coordenadas del primer vector
	switch(q){
		case 1:
			q_inicio=0;
			q_fin=0;
			break;
		case 2:
			q_inicio=0;
			q_fin=n/2;
			break;
		case 3:
			q_inicio=n/2;
			q_fin=0;
			break;
		case 4:
			q_inicio=n/2;
			q_fin=n/2;
			break;
		
	}
	
	//asignanado las coordenadas del segundo vector
	switch(z){
		case 1:
			z_inicio=0;
			z_fin=0;
			break;
		case 2:
			z_inicio=0;
			z_fin=n/2;
			break;
		case 3:
			z_inicio=n/2;
			z_fin=0;
			break;
		case 4:
			z_inicio=n/2;
			z_fin=n/2;
			break;
		
	}
	
	//Asignando los valores correspondientes al vector #1
	for(int i=q_inicio;i<n/2+q_inicio;i++){
		for(int j=q_fin;j<n/2+q_fin;j++){
			vector_1[a][b]=matriz[i][j];
			b=b+1;
		}
		b=0;
		a=a+1;
	}
	a=0;
	b=0;

	//asignando los valores correcpondiente al vector #2
	for(int i=z_inicio;i<n/2+z_inicio;i++){
		for(int j=z_fin;j<n/2+z_fin;j++){
			vector_2[a][b]=matriz[i][j];
			b=b+1;
		}
		b=0;
		a=a+1;
	}
	//Multiplicando las matrices
	for (int a = 0; a < n/2; a++) {
    // Dentro recorremos las filas de la primera (A)
    for (int i = 0; i < n/2; i++) {
        int suma = 0;
        // Y cada columna de la primera (A)
        for (int j = 0; j < n/2; j++) {
            // Multiplicamos y sumamos resultado
            suma += vector_1[i][j] * vector_2[j][a];
        }
        // Lo acomodamos dentro del producto
        vector_3[i][a] = suma;
    }
}	
	//Imprimiendo
	for(int i=0;i<n/2;i++){
		for(int j=0;j<n/2;j++){
			cout<<vector_3[i][j]<<" ";	
		}
		cout<<endl;
	}

	return 0;
}
