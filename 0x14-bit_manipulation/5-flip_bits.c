#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: 1st value
 * @m: 2nd value
 * Return: Zero
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, bit = 0;

	while (i > 0)
	{
		bit += (i & 1);
		i >>= 1;
	}

	return (bit);
}
