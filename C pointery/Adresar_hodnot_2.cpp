/* PROGRAM UKÁŽE ADRESÁØ, KDE JE HODNOTA ULOŽENA */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main () 
{
setlocale(LC_ALL,"");

	int a;
	a = 56;
	printf("Promìnná a s hodnotou %d je v pamìti uložená na adrese %p \n", a, &a); // %p zaøídí výpis v šestnáctkové soustavì
	
	system("pause");
	return (0);	
}
