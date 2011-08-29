
#include <stdio.h>

int main()
  {
    int *num_ptr; /* deklarerer en int-peker */
    int number;   /* deklarerer en int */

    number = 4;   
    num_ptr = &number; /* setter pekeren lik minneadressen
                          til number */
    printf("verdien til number: %d\n",      number);
    printf("adressen til number: %u\n",     (unsigned int) &number);
    printf("verdien til num_ptr: %u\n",     (unsigned int) num_ptr);
    printf("verdien num_ptr peker på: %d\n",*num_ptr);
  }

