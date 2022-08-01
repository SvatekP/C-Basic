#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("%d \n", strlen("duha")); // vrátí 4
    
	
	printf("Zadej slovov: ");
	char text[21];
	scanf(" %20[^\n]s", text);    
	strcat(text, " je pan. \n"); // uloží do text "duha je na nebi"
	printf("%s", text);    
    
    
    char text1[] = "Pan X znovu udeøil.";
        char *p = strchr(text1, 'X'); // Zjistíme pozici znaku 'X' v textu
        int pozice = p - text1;
        if (p != NULL)
        {
                printf("Nalezeno na pozici %d", pozice);
        }
        else
        {
                printf("Nenalezeno");
        }
    
        
        
    return (EXIT_SUCCESS);
}

