/* PROGRAM UR�� NEJV�T�� ZE T�� ZADAN�CH ��SEL */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  int a = 0, b = 0, c = 0, max = 0;
  
  printf("Zadej tri cisla oddelena mezerou: ");
  scanf("%i %i %i", &a, &b, &c);
  
  if (a > max)
  {
  	max = a;
  }
  
  if (b > max)
  {
  	max = b;
  }

  if (c > max)
  {
  	max = c;
  }	

  
printf("Nejvetsi cislo je %i\n", max);
  
  system("pause");
  
  return 0;
}
