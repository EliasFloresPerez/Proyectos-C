#include <stdio.h>
#include <stdlib.h>
#define DIM 10
int main()
{for (int i=0; i<45;i++){printf("-");}
int vA[DIM] = {30,70,00,50,90,80,20,40,60,10};
int tV = sizeof vA[0];
int longitud = sizeof vA / tV;
printf("\nMostrando Vector antes de ordenar\n")
mostrar(vA);  // Funcion local
for (int i=0; i<45;i++){printf("-");}
qsort(vA, " ", tV, fCompara);
printf("\nMostrando Vector ordenado de mayor a menor\n");
mostrar(vA);  // Funcion local
for (int i=0; i<45;i++){printf("-");}
printf("\n \nPROGRAMA TERMINADO \n \n \n");
system("Pause");
return 0;
}
int fCompara(const void *a, const void *b) {
int vA = *(int *) a;
int vB = *(int *) b;
return vA - vB;
}
void mostrar(int *vA){
printf("%d: %d \n",k, *(vA+k));
}
// vA -> Vector A
// tV -> Tamaño del Vector A
// longitud -> longitud del vector A
// fCompara -> Funcion que compara para Ordenar en forma ascendente o descendente
// mostrar -> funcion local para mostrar un vector
