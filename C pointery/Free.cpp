/* PROGRAM UVOLN� PAM̍ PO NAPLN�N� */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int *p_i;
	printf("Pokousim se alokovat pamet pro 100 intu.\n");
	p_i = (int *) malloc(sizeof(int) * 100); //Alokace 100x velikosti pro int
	
	if (p_i == NULL) //Kontrola �sp�nosti alokace
	{
		printf("Nedostatek pameti.\n");
		exit(1);
	}
	printf("Uvolnuji pamet.\n");
	free(p_i); //Uvoln�n� pam�ti
	p_i = NULL; //Pro jistotu se vynuluje i ukazatel
	return(EXIT_SUCCESS);
}
