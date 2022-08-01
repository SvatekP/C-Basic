/* Kužel */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float objem(float r1, float v1)
{
	float V;
	V = (pow(r1,2) * v1 * M_PI)/3;
	return V;
}

float hmotnost(float ro, float V)
{
	float m;
	m = ro * V;
	return m;
}

int main()

{
	float diamant = 3500;
	float ocel = 7580;
	float sklo = 2600;
	
	char o;
	
	float r = 0; //Polomìr
	float v = 0; //Výška
		
	printf("Zadej rozmery kuzele v metrech:\n");
	
	printf("Zadej polomer:\n");
	scanf("%f", &r);
		
	printf("Zadej vysku:\n");
	scanf("%f", &v);
	
	printf("\n\n Tve zadane hodnoty pro kuzel jsou:\n Polomer: %.2f \n Vyska: %.2f\n\n", r, v);
	
	
	printf("Nyni zadej z jakeho materialu kuzel je - d jako diamant, o jako ocel nebo s jako sklo: ");
	scanf(" %c",&o);
	if (o == 'd' || o == 'o' || o == 's')
	{}
	else
	{
	printf("Zadavej jenom d, o nebo s !:\n");
	return 0;
	}
	if(o == 'd')
	{
		printf("\nDiamantovy kuzel ma objem %.2f m^3 a hmotnost je %.2f kg\n", objem(r, v), hmotnost(diamant,objem(r, v)));
		return 0;
	}
	if(o == 'o')
	{
		printf("\nOcelovy kuzel ma objem %.2f m^3 a hmotnost je %.2f kg\n", objem(r,v), hmotnost(ocel,objem(r,v)));
		return 0;
	}
	if(o == 's')
	{
		printf("\nSkleneny kuzel ma objem %.2f m^3 a hmotnost je %.2f kg\n", objem(r,v), hmotnost(sklo,objem(r,v)));
		return 0;
	}
	  
  return 0;
}
