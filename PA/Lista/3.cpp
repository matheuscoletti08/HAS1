#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  float n1, n2, n3, n4, calc;
  printf ("digite um numero: ");
  scanf ("%f", &n1);
  printf ("digite o segundo numero: ");
  scanf ("%f", &n2);
  printf ("digita o terceiro numero: ");
  scanf ("%f", &n3);
  printf ("digitu ultimu numero: ");
  scanf ("%f", &n4);
  calc = (n1 + n2 + n3 + n4) /4;
  printf ("pega a media: %.2f", calc);
}

