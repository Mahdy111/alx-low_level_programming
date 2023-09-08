/*
   * File prints nums
   * AMAHDY
*/

#include <stdio.h>

/**
  * main - Prints numbers of base 16 in lowercase
  * Return: zero
*/
int main(void)
{
	int base;
	char let;

	for (base = 0; base < 10; base++)
		putchar((base % 10) + '0');

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);

	putchar('\n');

return (0);
}
