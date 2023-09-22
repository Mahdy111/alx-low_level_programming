#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @in: input
 * Return: Capitalized String
 */
char *cap_string(char *in)
{
	int change, i, j;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	change = 29;

	for (i = 0; in[i] != '\0'; i++)
	{
		if (in[i] >= 'a' && in[i] <= 'z')
		{
			in[i] =  in[i] - change;
		}
		change = 0;
		for (j = 0; chars[j] != '\0'; j++)
		{
			if (chars[j] == in[i])
			{
				change = 29;
				break;
			}
		}
	}
	return (in);
}
