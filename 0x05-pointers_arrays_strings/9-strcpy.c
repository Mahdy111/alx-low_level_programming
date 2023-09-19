#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: input
 * @src: copy storage
 * Return: return the copy
 */

char *_strcpy(char *dest, char *src)
{
	char *st = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (st);
}
