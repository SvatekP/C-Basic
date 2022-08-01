/* PROGRAM PRACUJE S 2D GRAFIKOU */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Pøíprava pole
	
  int kinosal[5][5];
  int i, j;
	for (j = 0; j < 5; j++) //Naplnìní 0
	for (i = 0; i < 5; i++)
  		kinosal[j][i] = 0;
  		
  //Následné úpravy		
  		
  kinosal [2][2] = 1; //Prostøedek
  for ( i = 1; i < 4; i++) //4. øádek
  {
  		kinosal[i][3] = 1;
  }
  for (i = 0; i < 5; i++) //Poslední øádek
  {
  		kinosal[i][4] = 1;
  }
  
  //Výpis
  
  for (j = 0; j < 5; j++)
  {
  		for (i = 0; i < 5; i++)
  			printf("%d", kinosal[i][j]);
  		printf("\n");
  }
  
}
