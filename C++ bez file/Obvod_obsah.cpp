/* OBSAH A OBVOD OBDELNÍKU */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //lokalizace jazyka

int main()

{
	printf("* Locale LC_ALL nastaveno na: %s\n", setlocale(LC_ALL,""));  // národní abeceda
	
	printf("\n Pøi psaní desitinných èísel používej desetinnou èárku.\n\n");

	printf("Jednotkami se nebudeme zdržovat, pøedpokládáme, že pro oba rozmìry jsou stejné.\n\n");

	printf("Zadejte délku a šíøku obdelníku, já vypoèítám obsah a obvod.\n");

	float i,j;  // float = desetinná èísla
	scanf("%f%f", &i, &j);
  
	putchar('\n');  // vloží volný øádek
	
	printf("Obsah tohoto obdelníku je %.2f jednotek ètvereèních.\n\n", i*j);  // %.2f = 2 desetinná místa
	
	printf("Obvod tohoto obdelníku je %.2f jednotek délkových.\n\n", 2*i + 2*j);
  
  system("pause");
  
  return 0;
}
