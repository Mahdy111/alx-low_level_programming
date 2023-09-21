#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: output
 * @src: input
 * @n: number bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int in, it;

	for (in = 0; dest[in] != '\0'; in++)
		;
	for (it = 0; it < n && src[it] != '\0'; it++)
	{
		dest[in] = src[it];
		in++;
	}
	if (it < n)
	{
	dest[in] = '\0';
	}
	return (dest);
}
