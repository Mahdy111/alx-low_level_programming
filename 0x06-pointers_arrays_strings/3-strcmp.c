#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: input
 * @s2: input
 * Return: return else return other number
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
