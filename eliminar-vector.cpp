#include <stdio.h>
#include <conio.h>
int main() {
//PROBLEMA # 16
//De un vector que contiene 15 elementos
// máximo, eliminar una posición,
//ocasionando que se recorran los elementos
// de la derecha hacia la izquierda,
//evitando dejar huecos en el vector.
 int i =0;
 int vector[20];
 int numeroElementos=0;
 int posicionEliminar=0;
 int valorInsertar=0;
 printf("Ingrese el numero de elementos a ingresar : ");
 scanf("%d",&numeroElementos);
 // carga del vector
 for (i=0; i<=numeroElementos-1;i++) {
     printf("\nInserte el elemento Vector[%d] = ",i+1);
     scanf("%d",&vector[i]);
 }
 printf("\nIngrese la posicion a ELIMINAR: ");
 scanf("%d",&posicionEliminar);
 for (i=posicionEliminar;i<=numeroElementos;i++){
     vector[ posicionEliminar-1] = vector[posicionEliminar];
 }
     vector[ posicionEliminar] = vector[posicionEliminar+1];
 printf("Su vector resultante es: ");
 for (i=0;i<=numeroElementos-1;i++){
	if(i==posicionEliminar){
		vector[i]=NULL;
	}
 }
for (i=0;i<=numeroElementos-1;i++){
	if(vector[i]!=NULL){
		printf("\nVector [%d]= %d",i+1,vector[i]);
	}
 }
 return 0;
}
