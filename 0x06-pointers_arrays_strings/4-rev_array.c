#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: input
 * @n: positions array has
 */
void reverse_array(int *a, int n)
{
	int init, new;

	new = n - 1;
	for (init = 0; init < n / 2; init++)
	{
		int start, end;

		start = a[init];
		end = a[new];
		a[init] = end;
		a[new] = start;
		new--;
	}
}
