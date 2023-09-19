 #include "main.h"

/**
 * puts2 - function prints every character of a string,
 * @s: This pointer point to a char or string
 *
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
