/* PROGRAM PROVEDE RÙZNÉ MATEMATICKÉ OPERACE */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  int operace = 0;
  float a = 0, b = 0, vysledek = 0;
  
  printf("Vyber operaci, kterou chces provadet: \n1 pro scitani \n2 pro odcitani \n3 pro nasobeni \n4 pro deleni\n");
  scanf ("%i", &operace);
  printf ("Zadej dve cisla oddelena mezerou:\n");
  scanf ("%f %f", &a, &b);
  
  if (operace == 1)
  {
  vysledek = a + b;
  printf ("Cislo %.2f + %.2f = %.2f\n", a, b, vysledek);
  }
  
  if (operace == 2)
  {
  vysledek = a - b;
  printf ("Cislo %.2f - %.2f = %.2f\n", a, b, vysledek);  
  }
  
  if (operace == 3)
  {
  vysledek = a * b;
printf ("Cislo %.2f * %.2f = %.2f\n", a, b, vysledek);
  }
  
  if (operace == 4)
  {
  vysledek = a / b;
 printf ("Cislo %.2f / %.2f = %.2f\n", a, b, vysledek);
  }

  
  system("pause");
  
  return 0;
}
