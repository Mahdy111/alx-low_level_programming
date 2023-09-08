/*
   * File manipulates nums
   *AMAHDY
 */

#include <stdio.h>

/**
  * main - Prints nums using putchar
  * Return: zero
*/
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
		putchar((nums % 10) + '0');

	putchar('\n');

return (0);
}
