#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: input string
 * @s2: input string
 * Return: pointer to a newly allocated space in memory, else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i, j;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	ch = malloc(i + j + 1);
	if (ch == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		ch[i] = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
		ch[i + j] = *(s2 + j);
	ch[i + j] = *(s2 + j);
	return (ch);
}
