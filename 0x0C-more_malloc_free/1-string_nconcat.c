#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - counts and returns string length.
 * @s: input string
 * Return: pointerto a newly allocated space in memory
 */

int _strlen(char *s)
{
	int ch = 0;

	for (ch = 0; *s; ch++)
		s++;

	return (ch);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to add
 *
 * Return: ptr to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int i, j, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1l = _strlen(s1);
	s2l = _strlen(s2);

	n = (n >= s2l) ? s2l : n;

	nstr = malloc((s1l + n) * sizeof(char) + 1);
	if (!nstr)
		return (NULL);

	for (i = 0; i < s1l; i++)
		nstr[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		nstr[i] = s2[j];

	nstr[i] = '\0';
	return (nstr);
}
