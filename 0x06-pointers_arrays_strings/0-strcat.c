#include "main.h"

/**
 *_strcat - prints a function that concatenates two strings.
 *
 *@dest: output dest
 *@src: input source
 * Return: to dest, concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
