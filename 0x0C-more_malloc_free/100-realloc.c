#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - This is a funcion copies Src to dest
 * @dest: This is my result
 * @src: This is my string
 * @n: This is n my number bytes to copy
 * Return: This my my string copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pDst = dest;
	char const *pSrc =  src;

	for (i = 0; i < n; i++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: pointer old size
 * @new_size: pointer new size
 *
 * Return: void *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		free(ptr);
		nptr = malloc(new_size);
		if (!nptr)
			return (NULL);
		return (nptr);
	}

	if (new_size > old_size)
	{
		nptr = malloc(new_size);
		if (!nptr)
			return (NULL);

		_memcpy(nptr, ptr, old_size);
		free(ptr);
	}
	return (nptr);
}
