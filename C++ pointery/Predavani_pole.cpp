/* PROGRAM UKÁŽE, JAK FUNGUJE PØEDÁVÁNÍ POLE */
#include <stdio.h>
#include <stdlib.h>

void napln_pole(int pole[], int delka)
{
	int i;
	for (i = 0; i < delka; i++)
	{
		pole[i] = i + 1;
	}
}

int main(int arg, char** argv)
{
	int cisla[10];
	napln_pole(cisla, 10);
	printf("%d", cisla[5]);
	return (EXIT_SUCCESS);
}
