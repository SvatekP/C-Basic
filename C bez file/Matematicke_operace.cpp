/* PROGRAM PROVEDE RÙZNÉ MATEMATICKÉ OPERACE */
#include <stdio.h>
#include <stdlib.h>

int soucet(int a1, int a2)
{
	int soucet1;
	soucet1 = a1+a2;
	return soucet1;
}

int rozdil(int b1, int b2)
{
	int rozdil1;
	rozdil1 = b1-b2;
	return rozdil1;
}

int soucin(int c1, int c2)
{
	int soucin1;
	soucin1 = c1*c2;
	return soucin1;
}

int podil(int d1, int d2)
{
	int podil1;
	podil1 = d1/d2;
	return podil1;
}




int main()

{
  char operace;
  int cislo1 = 0, cislo2 = 0;
  
  printf("Vyber operaci, kterou chces provadet: \n+ pro scitani \n- pro odcitani \n* pro nasobeni \n/ pro deleni\n");
  scanf ("%c", &operace);
  
    if (operace == '+' || operace == '-' || operace == '*' || operace == '/')
  {
  }
  else
  {
  printf("Nezadal jsi spravnou operaci\n");
  return 0;
  }

  printf ("Zadej dve cisla oddelena mezerou:\n");
  scanf("%i %i", &cislo1, &cislo2);
  
  if (operace == '+')
  {
  printf("Soucet zadanych cisel je %i \n", soucet(cislo1, cislo2));  
  }
  
  if (operace == '-')
  {
  printf("Rozdil zadanych cisel je %i \n", rozdil(cislo1, cislo2));  
  }
  
  if (operace == '*')
  {
  printf("Soucin zadanych cisel je %i \n", soucin(cislo1, cislo2));  
  }
  
  if (operace == '/')
  {
  printf("Podil zadanych cisel je %i \n", podil(cislo1, cislo2));  
  }
  
  
  system("pause");
  
  return 0;
}
