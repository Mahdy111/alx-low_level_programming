/*
   * File is about letter manip
   *AMAHDY
 */
#include <stdio.h>

/**
  * main - Prints alphabet in lowercase except q and e
  * Return: zeroo
*/
int main(void)
{
	char buchstabe;

	for (buchstabe = 'a'; buchstabe <= 'z'; buchstabe++)
	{
		if (buchstabe != 'e' && buchstabe != 'q')
			putchar(buchstabe);
	}

	putchar('\n');

return (0);
}
