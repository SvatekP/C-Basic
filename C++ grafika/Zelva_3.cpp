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
  
  
  //1. øádka		
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][0] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][0] = 1;
  }
  
  //2. øádka		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][1] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][1] = 1;
  }
  //3. øádka		
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][2] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][2] = 1;
  }
  
  //4. øádka		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][3] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][3] = 1;
  }
    //5. øádka		
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][4] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][4] = 1;
  }
  
  //6. øádka		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][5] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][5] = 1;
  }
    //7. øádka		
  for (i = 0; i < 2; i++)
  {
  		sachovnice[i][6] = 1;
  }
  for (i = 4; i < 6; i++)
  {
  		sachovnice[i][6] = 1;
  }
  
  //8. øádka		
  for (i = 2; i < 4; i++)
  {
  		sachovnice[i][7] = 1;
  }
  for (i = 6; i < 8; i++)
  {
  		sachovnice[i][7] = 1;
  }
  
  //Výpis
  
  for (j = 0; j < 8; j++)
  {
  		for (i = 0; i < 8; i++)
  			printf("%d", sachovnice[i][j]);
  		printf("\n");
  }
  
}
