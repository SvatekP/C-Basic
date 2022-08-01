/* KOPÍROVÁNÍ SOUBORU POMOCÍ EOF (END OF FILE) */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  FILE *fr, *fw;
  int c;
  
  fr = fopen("ORIG.TXT", "r");
  fw = fopen("KOPIE.TXT", "w");
  
  while ((c = getc(fr)) != EOF)
    putc(c, fw);
    
  fclose(fr);
  fclose(fw);
    
  return 0;
}
