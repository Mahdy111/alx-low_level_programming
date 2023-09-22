#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @mod: input
 * Return: Converted String
 */

char *leet(char *mod)
{
	int i, j;
	char may[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mars[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char nums[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; mod[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (mod[i] == may[j] || mod[i] == mars[j])
			{
				mod[i] = nums[j];
			}
		}
	}
	return (mod);
}
