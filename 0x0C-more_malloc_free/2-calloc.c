#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n; n--)
		*p++ = b;

	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: array
 * @size: counted in bytes
 * Return: zero, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
