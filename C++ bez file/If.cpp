/* PROGRAM POROVNÁ DVÌ ÈÍSLA ZADANÁ UŽIVATELEM*/
#include <stdio.h>
#include <stdlib.h>

int main()

{
	
  int a = 0, b = 0;
  
  printf("Zadej A a B oddelene mezerou: ");
  scanf("%i %i", &a, &b);
  
  if (a == b)
  {
  	printf("Zadana cisla se rovnaji.\n");
  }
  else
  {
  	printf("Zadana cisla se nerovnaji.\n");
  }
  
  system("pause");
  
  return 0;
}
