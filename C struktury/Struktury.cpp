#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
        char jmeno[51];
        int vek;
        char ulice[51];
} UZIVATEL;

int main(int argc, char** argv)
{
        UZIVATEL uzivatele[10];

        strcpy(uzivatele[0].jmeno, "Tomio Marny");
        uzivatele[0].vek = 33;
        strcpy(uzivatele[0].ulice, "Pricna 5");

        strcpy(uzivatele[1].jmeno, "Josef Novak");
        uzivatele[1].vek = 28;
        strcpy(uzivatele[1].ulice, "Ve Svahu 8");

        int i;
        for (i = 0; i < 2; i++)
        {
                printf("Uzivatel na indexu %d\n", i);
                printf("Jmeno: %s\n", uzivatele[i].jmeno);
                printf("Vek: %d\n", uzivatele[i].vek);
                printf("Ulice: %s\n\n", uzivatele[i].ulice);
        }
        return (EXIT_SUCCESS);
}
