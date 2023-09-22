#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of string to uppercase
 * @up: input
 * Return: uppercases
 */
char *string_toupper(char *up)
{
	int i = 0;
	int let = 'a' - 'A';

	for (i = 0; up[i] != '\0'; ++i)
	{
		if (up[i] >= 'a' && up[i] <= 'z')
		{
			up[i] = up[i] - let;
		}
	}
	return (up);
}
