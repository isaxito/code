#include <stdio.h>

#define N 80

int main (void)
{
  FILE * fp;
  char cadena[N] = {0};

  fp = fopen("frutas.txt", "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir...\n");
    return 1;
  }

  printf("Ingrese una fruta: ");
  scanf("%s", cadena);

  fprintf(fp, "%s\n", cadena);

  fclose(fp);
  return 0;
}

