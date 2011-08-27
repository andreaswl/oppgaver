
#include <stdio.h>

int ishex(unsigned char c)
{
	return(
        (c >= '0' && c <= '9') 
	    || (c >= 'a' && c <= 'f')
	    || (c >= 'A' && c <= 'F')
    );
}

int hexval(unsigned char c)
{
	if (!ishex(c)) return -1;

	if (c >= '0' && c <= '9') return (c - '0');
	if (c >= 'a' && c <= 'f') return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F') return (c - 'A' + 10);
}


void test(unsigned char c)
{
  printf("hexval('%c') == %d \n", c, hexval(c));
}


int main(void)
{
    test('a');
    test('1');
    test('0');
    test('g');
    test('f');
    return 0;
}
