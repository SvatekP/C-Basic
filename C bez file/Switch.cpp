/* POUITÍ PØÍKAZU SWITCH */
#include <stdio.h>
#include <stdlib.h>

int main()

{
  printf ("Stiskni libovolnou klavesu: \n");
  
 /*Pøi zadání a nebo b nebo c vypíše èíslo 1 a skonèí*/
  
  switch (getchar())
  {
    case 'a' :
    case 'b' :
    case 'c' :
    	printf ("1 \n");
    	system ("pause"); //Zajistí zastavení pøíkaz. øádku
    	break; //Konec pøíkazu switch - "vyskoèí" se z nìj
    
    case 'd' : //Pøi zadání znaku d vypíše èíslo 2 a skonèí
        printf ("2 \n");
    	system ("pause");
    	break;
    	
    default : //Ve všech ostatních pøípadech vypíše 3
        printf ("3 \n");
    	system ("pause");
    	break;			
  }
  
  return 0;
}
