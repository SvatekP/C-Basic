/* VR�CEN� P�E�TEN�HO ZNAKU ZP�T DO SOUBORU */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  FILE *fr; //Pointer - (ukazatel na m�sto, kde je soubor) prom�nnou f pro �ten� ze souboru
  int c, hodnota = 0;
  
  fr = fopen("CISLA.TXT", "r");
  if ((fr = fopen("CISLA.TXT", "r")) == NULL)
  {
  	printf("Soubor CISLA.TXT se nepodarilo otevrit.\n");
  }
  
  while ((c = getc(fr)) == '$')
    ;              //P�e�te v�echny p�edch�zej�c� znaky
  ungetc(c, fr);   //Vr�t� prvn� ��slici ��sla do bufferu
  
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
