/* PROGRAM UKÁŽE, JAK FUNGUJE VÝMÌNA ÈÍSEL POMOCÍ POINTERÙ */
#include <stdio.h>
#include <stdlib.h>

void prohod(int *p_a, int *p_b)
{
	int pomocna = *p_a;
	*p_a = *p_b;
	*p_b = pomocna;
}
int main(int argc, char** argv)
{
	int cislo1, cislo2;
	printf("Zadej dve cela cisla, cislo A a cislo B a ja je prohodim. \n");
	scanf("%i %i", &cislo1, &cislo2);
	prohod(&cislo1, &cislo2);
	printf ("V A je cislo %d a v B je cislo %d.\n", cislo1, cislo2);
	return (EXIT_SUCCESS);
}
