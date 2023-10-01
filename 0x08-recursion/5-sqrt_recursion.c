#include "main.h"
/**
 * ref_sqrt - my aiding function
 * @i: entry is equal to n
 * @j: sum
 *
 * Return: natural sqrt, else -1
 */
int ref_sqrt(int i, int j)
{
	if (i == (j * j))
		return (j);
	else if ((j * j) > i)
		return (-1);
	else
		return (ref_sqrt(i, j + 1));
}

/**
  * _sqrt_recursion - prints  the natural square root of a number
  * @n: processed number
  *
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (ref_sqrt(n, 0));
}
