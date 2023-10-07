#include "main.h"

/**
 * _strlen - Function returns the length of a string
 * @s: this is the input string
 * Return: Lenngth of the string
 */

int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0' ; str++)
		;

	return (str);
}
