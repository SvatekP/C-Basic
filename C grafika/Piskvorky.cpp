/* PROGRAM PRACUJE S 2D GRAFIKOU */
#include <stdio.h>
#include <stdlib.h>

int VYSKA = 9;
int SIRKA = 9;
char HORIZONTALNI_INDEXY[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
char PRVNI = 'X';
char DRUHY = 'O';
char NEOBSAZENE = ' ';

int main()
{	
	char plocha[VYSKA][SIRKA];
    int hrac_na_tahu = 0;
    int i, j;
    char zadana_horizontalni_souradnice;
    int zadana_vertikalni_souradnice;
    int horizontalni_souradnice;
    int vertikalni_souradnice;


    for (i = 0; i < VYSKA; i++)
        for (j = 0; j < SIRKA; j++)
            plocha[i][j] = NEOBSAZENE;
            

    while (1)
    {
        printf("  ");
        for (i = 1; i < SIRKA; i++)
            if (HORIZONTALNI_INDEXY[i] != 0)
                printf("%c", HORIZONTALNI_INDEXY[i - 1]);
        printf("\n");
        for (i = 0; i < VYSKA; i++)
        {
            printf("%d ", i + 1);
            for (j = 0; j < SIRKA; j++)
                printf("%c", plocha[i][j]);
            printf("\n");
        }


        printf("Zadejte horizontalni souradnici (A-%c):", HORIZONTALNI_INDEXY[SIRKA - 2]);
        scanf(" %c", &zadana_horizontalni_souradnice);

        horizontalni_souradnice = -1;
        for (i = 0; i <= SIRKA - 2; i++)
            if (zadana_horizontalni_souradnice == HORIZONTALNI_INDEXY[i])
            {
                horizontalni_souradnice = i;
                i = SIRKA;
            }

        printf("Zadejte vertikalni souradnici (1-%d):", VYSKA - 1);
        scanf(" %d", &zadana_vertikalni_souradnice);

        vertikalni_souradnice = -1;
        if (zadana_vertikalni_souradnice >= 1 && zadana_vertikalni_souradnice <= VYSKA - 1)
            vertikalni_souradnice = zadana_vertikalni_souradnice - 1;

        if (vertikalni_souradnice != -1 && horizontalni_souradnice != -1 && plocha[vertikalni_souradnice][horizontalni_souradnice] == NEOBSAZENE)
        {
            if (hrac_na_tahu == 0)
            {
                plocha[vertikalni_souradnice][horizontalni_souradnice] = PRVNI;
                hrac_na_tahu = 1;
            }
            else if (hrac_na_tahu == 1)
            {
                plocha[vertikalni_souradnice][horizontalni_souradnice] = DRUHY;
                hrac_na_tahu = 0;
            }
        }
        else
        {
            printf("Hodnoty nejsou validni, prosim opakujte akci\n");
        }
    }
}
