/* Z�PIS ��SLA DO SOUBORU */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  FILE *fw; //Pointer - (ukazatel na um�st�n� souboru) prom�nnou f pro z�pis do souboru
  int i;
  
  fw = fopen("ORIG.TXT", "w"); //Otev�e nebo vytvo�� soubor pro z�pis
  for (i = 1; i <= 10; i++)
    fprintf(fw, "%i\n", i); //Zap�e ��sla do souboru
  fclose(fw);
    
  return 0;
}
