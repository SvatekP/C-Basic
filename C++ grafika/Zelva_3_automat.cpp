/* PROGRAM PRACUJE S 2D GRAFIKOU */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //P��prava pole
	
  int sachovnice[8][8];
  int i, j;
	for (j = 0; j < 8; j++) //Napln�n� 0
	for (i = 0; i < 8; i++)
  		sachovnice[j][i] = 0;
  		
  //N�sledn� �pravy		
  
  int x = 0;
  int z = 0;
  
  for (j = 0; j < 7; i++)
  {
  //1. ��dka		
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
  //2. ��dka
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
  
  //V�pis
  
  for (j = 0; j < 8; j++)
  {
  		for (i = 0; i < 8; i++)
  			printf("%d", sachovnice[i][j]);
  		printf("\n");
  }
  
}
