#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer
 * Return: the converted number or Zero if.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] == '1')
		{
			j = j << 1;
			j = j | 1;
		}
		else if (b[i] == '0')
		{
			j = j << 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (j);
}
