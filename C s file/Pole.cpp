/* PROGRAM URÈÍ POÈET PÍSMEN */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define POCET ('Z' - 'A' +1) //Definice konstanty, název VŽDY velký

int main(void)

{
  FILE *fr;
  int c, i;
  int pole[POCET]; //Definice pole
  
  for (i = 0; i < POCET; i++)
    pole[i] = 0; //Nulování pole
  
  if ((fr = fopen("TEST.TXT", "r")) == NULL)
  {
  	printf("Soubor TEST.TXT se nepodarilo otevrit.\n");
  	return 1; //Ukonèení programu - 1 znamená 'chyba'
  }
     
  while ((c = getc(fr)) != EOF)
  {
    	if (isalpha(c)) //Pøeètený znak je písmeno
    	pole[toupper(c) - 'A']++; //TOUPPER mìní MALÁ písmena na VELKÁ
  }
	
  printf("V souboru byl tento pocet jednotlivych pismen\n");
  for (i = 0; i < POCET; i++)
    printf("%c - %d\n", i + 'A', pole[i]);
    
  if (fclose(fr) == EOF)
  {
  	printf("Soubor .TXT se nepodarilo uzavrit.\n");
  	return 1;
  }
    
  return 0;
}
