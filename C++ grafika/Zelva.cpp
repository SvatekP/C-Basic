/* PROGRAM PRACUJE S 2D GRAFIKOU */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //P��prava pole
	
  int kinosal[5][5];
  int i, j;
	for (j = 0; j < 5; j++) //Napln�n� 0
	for (i = 0; i < 5; i++)
  		kinosal[j][i] = 0;
  		
  //N�sledn� �pravy		
  		
  kinosal [2][2] = 1; //Prost�edek
  for ( i = 1; i < 4; i++) //4. ��dek
  {
  		kinosal[i][3] = 1;
  }
  for (i = 0; i < 5; i++) //Posledn� ��dek
  {
  		kinosal[i][4] = 1;
  }
  
  //V�pis
  
  for (j = 0; j < 5; j++)
  {
  		for (i = 0; i < 5; i++)
  			printf("%d", kinosal[i][j]);
  		printf("\n");
  }
  
}
