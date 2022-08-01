/* PROGRAM PROVEDE RÙZNÉ MATEMATICKÉ OPERACE */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rovnice(int *p_a, int *p_b, int *p_c)
{
  int D;
  int x1;
  int x2;
  
  D = ((*p_b)*(*p_b)) - (4 * (*p_c) * (*p_a));
  
  if (D > 0)
  {
	x1 = (-(*p_b)+sqrt(D))/(2*(*p_a));
	x2 = (-(*p_b)-sqrt(D))/(2*(*p_a));
	return x1;
	return x2;
  }

  if (D == 0)
  {
	x1 = (-(*p_b))/(2*(*p_a));
	return x1;
  }

  if (D < 0)
  {
	printf("Tato rovnice nema v oboru realnych cisel zadne reseni\n");
  }
}


int main(int argc, char** argv)

{
  int a, b, c;
 
  printf ("Zadej tri cisla A, B, C pro rovnici A*X^2 + B*X + C = 0 a ja vypocitam X: \n");
  scanf("%i %i %i", &a, &b, &c);
    
  printf ("Cislo X v rovnici A*X^2 + B*X + C = 0 se rovna \n %d\n", rovnice(&a, &b, &c));
  
  system("pause");
  
  return 0;
}
