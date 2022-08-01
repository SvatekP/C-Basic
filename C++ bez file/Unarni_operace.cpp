/* UNÁRNÍ OPERACE */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  int i = 5, j = 1, k;

  i++;
  printf("i = %d, j = %d, k = %d\n", i, j, k);
  j = ++i;
  printf("i = %d, j = %d, k = %d\n", i, j, k);
  j = i++;
  printf("i = %d, j = %d, k = %d\n", i, j, k);
  k = --j + 2;
  printf("i = %d, j = %d, k = %d\n", i, j, k);    
  
  
  system("pause");
  
  return 0;
}
