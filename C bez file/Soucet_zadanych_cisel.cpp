/* PROGRAM SE�TE T�I ��SLA ZADAN� U�IVATELEM*/
#include <stdio.h>
#include <stdlib.h>

int main()

{
	
  int a, b, c, soucet;
  printf("Zadej tri cisla oddelena mezerou: ");
  scanf("%i %i %i", &a, &b, &c);
  
  soucet = a + b + c;
  
  printf("Soucet %i a %i a %i je %i\n", a, b, c, soucet);
  
  system("pause");
  
  return 0;
}
