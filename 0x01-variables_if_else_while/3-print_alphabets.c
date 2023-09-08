/*
   * File is letters manip
   * AMAHDY
*/

#include <stdio.h>

/**
  * main - Prints alphabet in lowercase, and then in uppercase
  * Return: zero
*/
int main(void)
{
	char Buchstabe;

	for (Buchstabe = 'a'; Buchstabe <= 'z'; Buchstabe++)
	putchar(Buchstabe);

	for (Buchstabe = 'A'; Buchstabe <= 'Z'; Buchstabe++)
	putchar(Buchstabe);

	putchar('\n');

	return (0);
}
