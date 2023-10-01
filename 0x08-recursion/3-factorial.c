#include "main.h"

/**
  * factorial - returns the factorial of a given number.
  * @n: initial number
  *
  * Return: zero, n is lower than 0, the function should return -1
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (1);

	return (n * factorial(n - 1));

}
