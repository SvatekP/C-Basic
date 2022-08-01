/* VOLÁNÍ PØEDCHOZÍCH FUNKCÍ */
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


int main()

{
  int cislo1, cislo2;
  printf("Zadej dve cisla oddelena mezerou: \n");
  scanf("%i %i", &cislo1, &cislo2);
  
  printf("Soucet zadanych cisel je %i \n", soucet(cislo1, cislo2));  
  printf("Rozdil zadanych cisel je %i \n", rozdil(cislo1, cislo2));  
  
  system("pause");
  
  return 0;
}
