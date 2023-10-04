#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **num;
	int i, j;


	if (width <= 0 || height <= 0)
		return (NULL);
	num = malloc(sizeof(*num) * height);
	if (num == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		num[i] = malloc(sizeof(int) * width);
		if (num[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(num[j]);
			}
			free(num);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			num[i][j] = 0;
		}
	}
	return (num);
}
