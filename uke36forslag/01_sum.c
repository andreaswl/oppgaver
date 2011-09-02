
#include <assert.h>

/* assert.h gives us access to assert(),
 * which will abort the program with an
 * error message if the parameter is not true.
 * This can be used to write tests to see
 * that everything is working as expected.
 *
 */


void sum(int a, int b, int *result)
{
	*result = a + b;
}


int main()
{
	int r;
	sum(2, 3, &r);
	assert(r == 5);
	return 0;
}

