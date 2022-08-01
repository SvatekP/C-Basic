/* VRÁCENÍ PØEÈTENÉHO ZNAKU ZPÌT DO SOUBORU */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  FILE *fr; //Pointer - (ukazatel na místo, kde je soubor) promìnnou f pro ètení ze souboru
  int c, hodnota = 0;
  
  fr = fopen("CISLA.TXT", "r");
  if ((fr = fopen("CISLA.TXT", "r")) == NULL)
  {
  	printf("Soubor CISLA.TXT se nepodarilo otevrit.\n");
  }
  
  while ((c = getc(fr)) == '$')
    ;              //Pøeète všechny pøedcházející znaky
  ungetc(c, fr);   //Vrátí první èíslici èísla do bufferu
  
  fscanf(fr, "%d", &hodnota);
  printf ("Nactene cislo = %d\n", hodnota);
  
  fclose(fr);
  if (fclose(fr) == EOF)
  {
  	printf ("Soubor CISLA.TXT se nepodarilo uzavrit.\n");
  	return 1;
  }
  
  return 0;
}
