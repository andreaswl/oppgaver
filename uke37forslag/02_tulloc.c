
#include <stdlib.h>
#include <stdio.h>

char *tulloc(size_t size)
{
	int length = 4 * size;
	char *mem = malloc(sizeof(char) * (length + 1));

	int i;
	for (i = 0; i < length; i += 4) {
		mem[i] = 't';
		mem[i+1] = 'u';
		mem[i+2] = 'l';
		mem[i+3] = 'l';	
	}
	mem[length] = '\0'; /* cstrings should end with a null byte. */
	return mem;
}

int main()
{
	/* A quick test to see it working: */
	printf("%s\n", tulloc(3)); 
}

