/*nombre del programa incrementador.c
 *
 *incrementador.c - programa canonico a + 1
 */

#include <stdio.h>
#include <iostream>

int main()
{
  int i;
  
  printf("increse el numero a incrementar de dos en dos:\n") ;
  scanf("%i",&i);
  
  for (i=i; i<=20; i=i+2)
    {printf("numero %d\n", i);}
  return 0;
}
      
