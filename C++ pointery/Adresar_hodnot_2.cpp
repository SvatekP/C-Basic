/* PROGRAM UK��E ADRES��, KDE JE HODNOTA ULO�ENA */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main () 
{
setlocale(LC_ALL,"");

	int a;
	a = 56;
	printf("Prom�nn� a s hodnotou %d je v pam�ti ulo�en� na adrese %p \n", a, &a); // %p za��d� v�pis v �estn�ctkov� soustav�
	
	system("pause");
	return (0);	
}
