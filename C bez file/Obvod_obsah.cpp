/* OBSAH A OBVOD OBDELN�KU */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //lokalizace jazyka

int main()

{
	printf("* Locale LC_ALL nastaveno na: %s\n", setlocale(LC_ALL,""));  // n�rodn� abeceda
	
	printf("\n P�i psan� desitinn�ch ��sel pou��vej desetinnou ��rku.\n\n");

	printf("Jednotkami se nebudeme zdr�ovat, p�edpokl�d�me, �e pro oba rozm�ry jsou stejn�.\n\n");

	printf("Zadejte d�lku a ���ku obdeln�ku, j� vypo��t�m obsah a obvod.\n");

	float i,j;  // float = desetinn� ��sla
	scanf("%f%f", &i, &j);
  
	putchar('\n');  // vlo�� voln� ��dek
	
	printf("Obsah tohoto obdeln�ku je %.2f jednotek �tvere�n�ch.\n\n", i*j);  // %.2f = 2 desetinn� m�sta
	
	printf("Obvod tohoto obdeln�ku je %.2f jednotek d�lkov�ch.\n\n", 2*i + 2*j);
  
  system("pause");
  
  return 0;
}
