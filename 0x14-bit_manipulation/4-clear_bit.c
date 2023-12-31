#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: bit value
 * @n: pointer
 * Return: 1 if it worked, or -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
