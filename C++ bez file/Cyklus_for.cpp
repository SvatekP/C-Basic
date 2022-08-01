/* Cyklus for */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  int i = 0, pocet = 0;
  
  printf("Zadej, kolik cisel chces vypsat: ");
  scanf("%i", &pocet);
  for (i = 0; i < pocet; i++)	  //Cyklus 100x
  printf("%d ", i);
	
  putchar('\n');	
	
	  
  system("pause");
  
  return 0;
}
