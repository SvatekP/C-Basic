/* PROGRAM PROVEDE RÙZNÉ MATEMATICKÉ OPERACE */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  char operace;
  float a = 0, b = 0, vysledek = 0;
  
  printf("Vyber operaci, kterou chces provadet: \n+ pro scitani \n- pro odcitani \n* pro nasobeni \n/ pro deleni\n");
  scanf ("%c", &operace);
  printf ("Zadej dve cisla oddelena mezerou:\n");
  scanf ("%f %f", &a, &b);
  
  if (operace == '+')
  {
  vysledek = a + b;
  printf ("Cislo %.2f + %.2f = %.2f\n", a, b, vysledek);
  }
  
  if (operace == '-')
  {
  vysledek = a - b;
  printf ("Cislo %.2f - %.2f = %.2f\n", a, b, vysledek);  
  }
  
  if (operace == '*')
  {
  vysledek = a * b;
printf ("Cislo %.2f * %.2f = %.2f\n", a, b, vysledek);
  }
  
  if (operace == '/')
  {
  vysledek = a / b;
 printf ("Cislo %.2f / %.2f = %.2f\n", a, b, vysledek);
  }

  
  system("pause");
  
  return 0;
}
