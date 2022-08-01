/* PROGRAM PRACUJE S 2D GRAFIKOU */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Pøíprava pole
	
  int pyramida[7][7];
  int i, j;
	for (j = 0; j < 7; j++) //Naplnìní 0
	for (i = 0; i < 7; i++)
  		pyramida[j][i] = 0;
  		
  //Následné úpravy		
  		
  pyramida [0][0] = 1;     //1. øádek
  for (i = 0; i < 2; i++) //2. øádek
  {
  		pyramida[i][1] = 1;
  }
  for (i = 0; i < 3; i++) //3. øádek
  {
  		pyramida[i][2] = 1;
  }
  for (i = 0; i < 4; i++) //4. øádek
  {
  		pyramida[i][3] = 1;
  }
  for (i = 0; i < 5; i++) //5. øádek
  {
  		pyramida[i][4] = 1;
  }
  for (i = 0; i < 6; i++) //6. øádek
  {
  		pyramida[i][5] = 1;
  }
  for (i = 0; i < 7; i++) //7. øádek
  {
  		pyramida[i][6] = 1;
  }
  
  //Výpis
  
  for (j = 0; j < 7; j++)
  {
  		for (i = 0; i < 7; i++)
  			printf("%d", pyramida[i][j]);
  		printf("\n");
  }
  
}
