/* PROGRAM ZKOPÍRUJE SOUBOR A ZKONTROLUJE, ZDA BYL OTEVØEN A NÁSLEDNÌ UZAVØEN */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  FILE *fr, *fw;
  int c;
  
  if ((fr = fopen("ORIG.TXT", "r")) == NULL)
  {
  	printf("Soubor ORIG.TXT se nepodarilo otevrit.\n");
  	return 1; //Ukonèení programu - 1 znamená 'chyba'
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
