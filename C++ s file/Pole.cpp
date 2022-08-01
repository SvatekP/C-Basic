/* PROGRAM UR�� PO�ET P�SMEN */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define POCET ('Z' - 'A' +1) //Definice konstanty, n�zev V�DY velk�

int main(void)

{
  FILE *fr;
  int c, i;
  int pole[POCET]; //Definice pole
  
  for (i = 0; i < POCET; i++)
    pole[i] = 0; //Nulov�n� pole
  
  if ((fr = fopen("TEST.TXT", "r")) == NULL)
  {
  	printf("Soubor TEST.TXT se nepodarilo otevrit.\n");
  	return 1; //Ukon�en� programu - 1 znamen� 'chyba'
  }
     
  while ((c = getc(fr)) != EOF)
  {
    	if (isalpha(c)) //P�e�ten� znak je p�smeno
    	pole[toupper(c) - 'A']++; //TOUPPER m�n� MAL� p�smena na VELK�
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
