/*
   * File reveses letters
   * AMAHDY
 */

#include <stdio.h>

/**
  * main - Prints lowercase alphabet in reverse
  * Return: zero
*/
int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);

	putchar('\n');

return (0);

}
