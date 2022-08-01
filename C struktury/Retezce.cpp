#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char text[5] = {'d', 'u', 'h', 'a', '\0'};
printf("%s \n", text);

char text1[6] = "pneis";
printf("%s \n",text1);

char text2[] = "duhak";
printf("%s \n", text2);

char epic[] = "cool";
epic[0] = 'l';
epic[2] = 'l';
epic[3] = '\0';
printf("%s \n", epic);

printf("Zadej sve jmeno: ");
char jmeno[51];
scanf(" %50[^\n]s", jmeno);
printf("Ahoj uzivateli %s, vitam te! \n", jmeno);


  system("pause");
}
