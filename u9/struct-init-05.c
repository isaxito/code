#include <stdio.h>

struct dato {
  int a;
  char b;
};

int main (void)
{
  struct dato d = {0};

  printf("Ingrese el miembro b: ");
  scanf(" %c", &d.b);

  printf("miembro a: %d\n", d.a);
  printf("miembro b: %c\n", d.b);

  return 0;
}




