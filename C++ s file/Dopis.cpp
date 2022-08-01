/* PROGRAM ZOBRAZÍ NA OBRAZOVKU DOPIS PØEVEDENÝ DO VELKÝCH PÍSMEN */
#include <stdio.h>
#include <stdlib.h>

int main()

{
	
  FILE *fr, *fw;
  int c, nejdelsi = 0, pocet = 0;
  
  fr = fopen("DOPIS.TXT", "r");
  if ((fr = fopen("DOPIS.TXT", "r")) == NULL)
  {
    printf("Soubor DOPIS.TXT se nepodarilo otevrit.\n");
    return 1;
  }
  
  fw = fopen("KOPIE_DOPISU.TXT", "w");
  if ((fw = fopen("KOPIE_DOPISU.TXT", "w")) == NULL)
  {
  	printf("Soubor KOPIE_DOPISU.TXT se nepodarilo otevrit.\n");
  	return 1;
  }
  
  while ((c = getc(fr)) != EOF)
  {
    putchar(c >= 'a' && c <= 'z' ? c + 'A' - 'a' : c);
    fprintf(fw, "%c", c >= 'a' && c <= 'z' ? c + 'A' - 'a' : c);
    if (c == '\n')
    {
      if (nejdelsi < pocet)
      nejdelsi = pocet;
      pocet = 0;
	}
	else
	pocet++;
  }
     
  printf("\n\nNejdelsi radka obsahovala %i znaku.\n", nejdelsi);
  
  fclose(fr);
  if (fclose(fr) == EOF)
  {
  	printf("Soubor DOPIS.TXT se nepodarilo uzavrit.\n");
  	return 1;
  }
  
  fclose(fw);
  if (fclose(fw) == EOF)
  {
  	printf("Soubor KOPIE_DOPIS.TXT se nepodarilo uzavrit.\n");
  	return 1;
  }
  
  return 0;
  
}
