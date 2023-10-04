#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates an array of chars initializes with a specific char
 *
 * @size: size variable of array
 * @c: char
 * Return: pointer to array, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(size);
	if (str == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
