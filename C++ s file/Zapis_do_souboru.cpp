/* ZÁPIS ÈÍSLA DO SOUBORU */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  FILE *fw; //Pointer - (ukazatel na umístìní souboru) promìnnou f pro zápis do souboru
  int i;
  
  fw = fopen("ORIG.TXT", "w"); //Otevøe nebo vytvoøí soubor pro zápis
  for (i = 1; i <= 10; i++)
    fprintf(fw, "%i\n", i); //Zapíše èísla do souboru
  fclose(fw);
    
  return 0;
}
