#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: bit value
 * @n: valur of an int
 * Return: alue of the bit at index index or -1 failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}
	i = n >> index;
	return (i & 1);
}
