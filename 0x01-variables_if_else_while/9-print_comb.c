/*
   * File deals with digits
   * AMAHDY
 */

#include <stdio.h>

/**
  * main - Prints all possible combinations of single-digit numbers
  * Return: zeroo
 */
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
	{
		putchar((nums % 10) + '0');

		if (nums == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

return (0);

}
