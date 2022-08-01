/* PROGRAM PROVEDE KVADRATICKOU ROVNICI */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float rovnice(float a, float b, float c, float *p_x1, float *p_x2)
{
  float D = (b*b) - (4*a*c);
 
  if (D > 0)
  {
	*p_x1 = (-b + sqrt(D)) / (2*a);
  	*p_x2 = (-b - sqrt(D)) / (2*a);
  	return (2);
  }

  if (D == 0)
  {
	*p_x1 = (-b + sqrt(D)) / (2*a);
	*p_x2 = *p_x1;
	return (1);
  }

  if (D < 0)
  {
  return (-1);
  }
}


int main(int argc, char** argv)

{
  float a, b, c, hodnota;
  float x1, x2;
 
  printf ("Zadej tri cisla A, B, C pro rovnici A*X^2 + B*X + C = 0 a ja vypocitam X: \n");
  scanf("%f %f %f", &a, &b, &c);
    
	hodnota = rovnice(a, b, c, &x1, &x2);
	
  	if (hodnota < 0)
    {
    	printf("Rovnice nema reseni v R.\n");
    }
	
	if (hodnota == 1)
	{
		printf("Rovnice ma dvojity koren x1 = x2 = %.2f.\n", x1);
	}
	
	if (hodnota > 0)
	{
		printf("Rovnice ma koreny x1 = %.2f a x2 = %.2f.\n", x1, x2);
	}
  
  
  system("pause");
  
  return 0;
}
