#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char slovo[128];
    char kopie[128];
    int delka_slova;
    int i;
    
    printf("Zadejte palindrom: ");
    scanf(" %s",slovo);
    
    delka_slova = strlen(slovo);
    for(i=0;i<delka_slova;i++)
        kopie[i]=slovo[delka_slova-i-1];
    kopie[delka_slova] = '\0';
    if(strcmp(slovo,kopie)==0)
        printf("Jedna se o palindrom");
    else
        printf("Nejedna se o palindrom");
    printf("\n");

  system("pause");
}
