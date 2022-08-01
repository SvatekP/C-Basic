/* Bubble sorte pro pole o maximálnì 100 prvcích */

 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
 
int main()
{
  int o = 0;
  int n = 0;
  int j = 0;
  int i = 0; 
  int pomocna = 0;
  printf("Kolik chces zadat cisel ? \n");
  scanf("%i", &o);
  
  int pole[o];
  
  for (i = 0; i < o; i++)  
  {
  	printf("Zadej cislo \n");
  	scanf("%i", &n);
  	pole[j] = n;
  	j++;
  }
  
      for(i = 0; i < o - 1; i++)
	  {
          for(j = 0; j < o - i - 1; j++)
		  {
              if(pole[j+1] < pole[j])
			  {
                  pomocna = pole[j + 1];
                  pole[j + 1] = pole[j];
                  pole[j] = pomocna;
		      }
          }
      }
      
 printf("\n\nSerazeno:\n");   
      
      for (i = 0; i < o; i++)
  {
  	printf("%d", pole[i]);
  	printf("\n");
  }    
     
  system("PAUSE");
  return 0;
  }
