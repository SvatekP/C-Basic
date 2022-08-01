/* PROGRAM ZKOP�RUJE SOUBOR A ZKONTROLUJE, ZDA BYL OTEV�EN A N�SLEDN� UZAV�EN */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  FILE *fr, *fw;
  int c;
  
  if ((fr = fopen("ORIG.TXT", "r")) == NULL)
  {
  	printf("Soubor ORIG.TXT se nepodarilo otevrit.\n");
  	return 1; //Ukon�en� programu - 1 znamen� 'chyba'
  }
  
  if ((fw = fopen("KOPIE.TXT", "w")) == NULL)
  {
  	printf("Soubor KOPIE.TXT se nepodarilo otevrit.\n");
  	return 1;
  }
  
  while ((c = getc(fr)) != EOF)
    putc(c, fw);
  
  fclose(fr);  
  if (fclose(fr) == EOF)
  {
  	printf("Soubor ORIG.TXT se nepodarilo uzavrit.\n");
  	return 1;
  }
  
  fclose(fw);
  if (fclose(fw) == EOF)
  {
  	printf("Soubor KOPIE.TXT se nepodarilo uzavrit.\n");
  	return 1;
  }
  
  return 0;
}
