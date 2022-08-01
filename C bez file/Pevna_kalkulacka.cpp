/* PROGRAM SEÈTE DANÝ POÈET ÈÍSEL ZADANÝCH UŽIVATELEM*/
#include <stdio.h>
#include <stdlib.h>

int main()

{
  int p;
  printf("Napis, kolik zadas cisel (rozmezi 2 - 5): ");
  scanf("%i", &p);	

	if (p < 2 || p > 5 )
	{
	printf("Zadal jsi neplatny pocet cisel! ");
  return 0;  	
	}
	
	
	int a = 0, b = 0, c = 0, d = 0, e = 0, s = 0;	
		
	if (p == 2)
	{
	int a, b, s;
	printf("Zadejte cisla oddelena mezerou: ");
	scanf("%i %i", &a, &b);
    	
	s = a + b;
  
	printf("Soucet cisel %i a %i je %i\n", a, b, s);	
	}
	
	
	if (p == 3)
	{
	int a, b, c, s;
	printf("Zadejte cisla oddelena mezerou: ");
	scanf("%i %i %i", &a, &b, &c);
    	
	s = a + b + c;
  
	printf("Soucet cisel %i a %i a %i je %i\n", a, b, c, s);	
	}
	
	
		if (p == 4)
	{
	int a, b, c, d, s;
	printf("Zadejte cisla oddelena mezerou: ");
	scanf("%i %i %i %i", &a, &b, &c, &d);
    	
	s = a + b + c + d;
  
	printf("Soucet cisel %i a %i a %i a %i je %i\n", a, b, c, d, s);	
	}
	
	
		if (p == 5)
	{
		int a, b, c, d, e, s;
	printf("Zadejte cisla oddelena mezerou: ");
	scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);
  	
	s = a + b + c + d + e;
  
	printf("Soucet cisel %i a %i a %i a %i a %i je %i\n", a, b, c, d, e, s);
	}	
  
  system("pause");
  
  return 0;
}
