/* PROGRAM ROZDÃLÕ »ÕSLA NA SUD… A LICH… */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int p = 0;
  int i = 0;
  int x = 0;
  int y = 0;
  int o = 0;
  int n = 0;
  int m = 0;
  int l = 0;	
  
  printf("Kolik chces zadat cisel ? \n");
  scanf("%i", &o);
  
  int serad[o];
  int sude[o];
  int pocets = 0;
  int pocetl = 0;
  
  for ( i = 0; i < o; i++)  
  {
  	printf("Zadej cislo \n");
  	scanf("%i", &m);
  	serad[l] = m;
  	l++;
  }
  
  
  
  for ( i = 0; i < o; i++)
{
  if (serad[p] % 2 == 0)
  {
  	sude[x] = serad[p];
  	pocets++;
  	p++;
  	x++;
  }
  else
  {
  	pocetl++;
  	p++;
  }
}
  
  
  
  		
  printf("Sudych cisel je %i. \n", pocets);		
  printf("Lichych cisel je %i. \n", pocetl);
  
  printf("\n\nSuda cisla:\n");
  
    for (y = 0; y < x; y++)
  {
  	printf("%d", sude[y]);
  	printf("\n");
  }
  
}
