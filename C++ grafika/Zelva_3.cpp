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
  
  
  //1. ��dka		
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][0] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][0] = 1;
  }
  
  //2. ��dka		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][1] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][1] = 1;
  }
  //3. ��dka		
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][2] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][2] = 1;
  }
  
  //4. ��dka		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][3] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][3] = 1;
  }
    //5. ��dka		
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][4] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][4] = 1;
  }
  
  //6. ��dka		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][5] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][5] = 1;
  }
    //7. ��dka		
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][6] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][6] = 1;
  }
  
  //8. ��dka		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][7] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][7] = 1;
  }
  
  //V�pis
  
  for (j = 0; j < 8; j++)
  {
  		for (i = 0; i < 8; i++)
  			printf("%d", sachovnice[i][j]);
  		printf("\n");
  }
  
}
