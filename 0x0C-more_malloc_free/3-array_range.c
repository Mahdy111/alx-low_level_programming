#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: lower end
 * @max: upper end
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(len * sizeof(int));
	if (!ptr)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}
