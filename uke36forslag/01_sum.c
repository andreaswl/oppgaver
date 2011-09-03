
#include <assert.h>

/* assert.h gives us access to assert(),
 * which will abort the program with an
 * error message if the parameter is not true.
 * This can be used to write tests to see
 * that everything works as expected.
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


/* Some areas where pointers can be useful:
 *
 * - functions "returning" multiple values
 * - functions operating on large input data
 * - speed (giving someone an address is sometimes
 *   quicker than building them a copy of the house)
 * - implementing a kind of object orientation
 *   (see last exercise this week).
 */
