#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - searches for an integer
  * @array: name of the array
  * @size: number of elements
  * @cmp: pointer to function
  * Return: Zero
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
