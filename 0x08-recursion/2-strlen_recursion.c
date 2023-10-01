#include "main.h"

/**
 * _strlen_recursion - Returns Length of a String.
 * @s: string
 *
 * Return: zero
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);

}