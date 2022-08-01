/* PROGRAM PØEVEDE VELKE PISMENO NA MALE */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  int pismeno;
	printf("Zadej VELKE PISMENO: ");
  	scanf("%c", &pismeno);
  	
  	if (pismeno >= 'A' && pismeno <= 'Z')
	{
  		pismeno = pismeno + ('a' - 'A');
	}
	  
	printf("Male pismeno = %c\n", pismeno);  
  	
  system("pause");
  
  return 0;
}
