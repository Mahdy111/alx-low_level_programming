#include "main.h"

/**
 * reverse_array - Reverses the content of an array 
 * @a: input
 */
void reverse_array(int *a, int n)
{
	int init, new;

	new = n - 1;
	for (i = 0; i < n / 2; init++)
	{
		int start, end;

		start = a[init];
		end = a[new];
		a[init] = end;
		a[new] = start;
		new--;
	}
}
