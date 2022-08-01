/* PROGRAM PØEVEDE VELKÉ PÍSMENO NA MALÉ A UPOZORNÍ, KDYŽ BUDE ZADÁNO MALÉ PÍSMENO */
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
  		printf("Male pismeno = %c\n", pismeno);
	}
	else
	{
	printf("Zadal jsi %c, a to neni velke pismeno!\n", pismeno);  	
	}  
  	
  system("pause");
  
  return 0;
}
