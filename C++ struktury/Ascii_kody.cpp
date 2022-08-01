#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vypisovany_znak;
    int a;
    
    for(a=0; a<=255; a++)
    {
        vypisovany_znak = a;
        printf("%d: %c\n", a, vypisovany_znak);
    }
    
  system("pause");
}
