/* PROGRAM PRACUJE S 2D GRAFIKOU */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //P��prava pole
	
  int pyramida[7][7];
  int i, j;
	for (j = 0; j < 7; j++) //Napln�n� 0
	for (i = 0; i < 7; i++)
  		pyramida[j][i] = 0;
  		
  //N�sledn� �pravy		
  		
  pyramida [0][0] = 1;     //1. ��dek
  for (i = 0; i < 2; i++) //2. ��dek
  {
  		pyramida[i][1] = 1;
  }
  for (i = 0; i < 3; i++) //3. ��dek
  {
  		pyramida[i][2] = 1;
  }
  for (i = 0; i < 4; i++) //4. ��dek
  {
  		pyramida[i][3] = 1;
  }
  for (i = 0; i < 5; i++) //5. ��dek
  {
  		pyramida[i][4] = 1;
  }
  for (i = 0; i < 6; i++) //6. ��dek
  {
  		pyramida[i][5] = 1;
  }
  for (i = 0; i < 7; i++) //7. ��dek
  {
  		pyramida[i][6] = 1;
  }
  
  //V�pis
  
  for (j = 0; j < 7; j++)
  {
  		for (i = 0; i < 7; i++)
  			printf("%d", pyramida[i][j]);
  		printf("\n");
  }
  
}
