/* POU�IT� P��KAZU SWITCH */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  printf ("Stiskni libovolnou klavesu: \n");
  
 /*P�i zad�n� a nebo b nebo c vyp�e ��slo 1 a skon��*/
  
  switch (getchar())
  {
    case 'a' :
    case 'b' :
    case 'c' :
    	printf ("1 \n");
    	system ("pause"); //Zajist� zastaven� p��kaz. ��dku
    	break; //Konec p��kazu switch - "vysko��" se z n�j
    
    case 'd' : //P�i zad�n� znaku d vyp�e ��slo 2 a skon��
        printf ("2 \n");
    	system ("pause");
    	break;
    	
    default : //Ve v�ech ostatn�ch p��padech vyp�e 3
        printf ("3 \n");
    	system ("pause");
    	break;			
  }
  
  return 0;
}
