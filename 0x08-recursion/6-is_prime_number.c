#include "main.h"
/**
 * prime_fun - detect if a vlaue is prime
 * @i: same as n
 * @j: calc from 1 to n
 *
 * Return: 1, otherwise 0
 */
int prime_fun(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (prime_fun(i, j + 1));
}
/**
 * is_prime_number - detect if n is prime
 * @n: value num
 *
 * Return: 1 otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_fun(n, 2));
}

