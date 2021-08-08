#include <stdio.h>


main ()

{

  FILE *fich;

  fich=fopen("NAVE.exe","r");

  fseek(fich, 0L, SEEK_END);
  printf("test.c ocupa %d bytes", ftell(fich)/1000);
  fclose(fich);

}
