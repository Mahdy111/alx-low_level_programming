#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns pointer to newly allocated space in memory
 * contains a copy of string
 *
 * @str: string as copy
 * Return: pointer to a new string which is a duplicate of the string
 */

char *_strdup(char *str)
{
	char *ch;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	ch = malloc(i + 1);
	if (ch == 0 || ch == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		ch[i] = *(str + i);
	}
	ch[i] = *(str + i);
	return (ch);
}
