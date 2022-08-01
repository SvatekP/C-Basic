/* PROGRAM UKÁŽE ADRESÁØ, KDE JE HODNOTA ULOŽENA */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
  {
  	int a;
  	a = 56;
    printf("Promenna a s hodnotou %d je v pameti ulozena na adrese %p", a, &a);
    return (EXIT_SUCCESS);
  }
