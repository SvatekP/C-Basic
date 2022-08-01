/* KVADRATICKÁ ROVNICE */

#include <stdio.h>
#include <math.h>

int main()

{
  float a, b, c, x1, x2, D;

  printf("Vypocitam ti kvadratickou rovnici ax^2+bx+c=0.\nZadej tri cisla oddelena mezerou.\n");
  scanf("%f %f %f", &a, &b, &c);

  D = (b*b) - (4 * c * a);
  if (D > 0)
  {
	x1 = (-b+sqrt(D))/(2*a);
	x2 = (-b-sqrt(D))/(2*a);
	printf("Resenim teto rovnice jsou 2 koreny a to x1 = %.2f a x2 = %.2f\n", x1, x2);
	return 0;
  }

  if (D == 0)
  {
	x1 = (-b)/(2*a);
	printf("Resenim teto rovnice je 1 koren a to x1 = %.2f\n", x1);
	return 0;
  }

  if (D < 0)
  {
	printf("Tato rovnice nema v oboru realnych cisel zadne reseni\n");
	return 0;
  }
}
