
#include <stdio.h>


/* A short int is 2 bytes == 16 bits.
 * Being signed, it has the range
 * -32,768 -> +32,767
 *
 *  The max value is 2^15 -1
 *
 */

int main(int argc, const char *argv[])
{
    short a, b, sum;
    a = 20000;  b = 20000;  sum = a+b;

    if ((a > 0 && b > 0 && sum < 0)
      || (a < 0 && b < 0 && sum > 0)) {
	printf("Overflow!\n");
    } else {
        printf("%d + %d = %d\n", a, b, sum);
    }
}
