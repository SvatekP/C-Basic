/* MATICE */
#include <stdio.h>
#include <stdlib.h>

int i; int j; int matice[3][3];

void tisk(int matice[][3])
{
	for(j=0; j<2; j++)
		{
			for (i=0; i<3; i++)
				{
				printf("%i", matice[j][i]);
				putchar (' ');
				}
				putchar ('\n');
		}	
}

int determinant0(int matice[][3])
{
	int D0 = (matice[0][0]*matice[1][1]) - (matice[0][1]*matice[1][0]);
	return D0;
}

int determinant1(int matice[][3])
{
	int D1 = (matice[0][2]*matice[1][1]) - (matice[0][1]*matice[1][2]);
	return D1;
}

int determinant2(int matice[][3])
{
	int D2 = (matice[0][0]*matice[1][2]) - (matice[0][2]*matice[1][0]);
	return D2;
}



int main()
{
	int x = 0; int y = 0;
	int a = 0; int b = 0; int c = 0; int d = 0; int e = 0; int f = 0;
	
	printf("Zadej matici:\n\n");
	scanf("%i %i %i %i %i %i", &a, &b, &c, &d, &e, &f);
	
	int matice[2][3] = {{a, b, c}, {d, e, f}}; 
  
	printf("\n\nZde je tva matice : \n\n");
	tisk (matice);
	
	printf ("\n\nDeterminant puvodni matice = %i", determinant0(matice));
	printf ("\nDeterminant matice pro x = %i", determinant1(matice));
	printf ("\nDeterminant matice pro y = %i", determinant2(matice));
	
	if(determinant0(matice) == 0 && determinant1(matice) != 0 && determinant2(matice) != 0)
	{
		printf("\n\nRovnice nema reseni.\n");
	}
	else
	{
		if (determinant0(matice) == 0 && determinant1(matice) == 0 && determinant2(matice) == 0)
	{
		printf("\n\nRovnice ma nekonecne mnoho reseni.\n");
	}
	else
	{
		x = determinant1(matice)/determinant0(matice);
		y = determinant2(matice)/determinant0(matice);
		printf("\n\n Hodnota x = %i a hodnota y = %i.\n", x, y);
	}
	}
		
	return 0;
}
