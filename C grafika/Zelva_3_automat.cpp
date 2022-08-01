/* PROGRAM PRACUJE S 2D GRAFIKOU */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Pøíprava pole
	
  int sachovnice[8][8];
  int i, j;
	for (j = 0; j < 8; j++) //Naplnìní 0
	for (i = 0; i < 8; i++)
  		sachovnice[j][i] = 0;
  		
  //Následné úpravy		
  
  int x = 0;
  int z = 0;
  
  for (j = 0; j < 7; i++)
  {
  //1. øádka		
  for (z = 0; z < 2; z++)
  {
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][j] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][j] = 1;
  }
  j++;
  }
  //2. øádka
  for (z = 0; z < 2; z++)
  {		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][j] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][j] = 1;
  }
  j++;
  }
  }
  
  //Výpis
  
  for (j = 0; j < 8; j++)
  {
  		for (i = 0; i < 8; i++)
  			printf("%d", sachovnice[i][j]);
  		printf("\n");
  }
  
}
