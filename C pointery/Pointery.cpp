/* PROGRAM UKÁŽE, JAK FUNGUJÍ POINTERY */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  int a, *p_a;
  a = 56;
  p_a = &a; //Uloží do p_a adresu promìnné a
  *p_a = 15; //Uloží hodnotu 15 na adresu v p_a
  printf("Ukazatel p_a ma hodnotu %d a ukazuje na hodnotu %d", p_a, *p_a);
  return (EXIT_SUCCESS);
}
