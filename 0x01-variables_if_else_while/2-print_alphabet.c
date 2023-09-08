/*
 * File is about the alphabetmanip
 * AMAHDY
*/
#include <stdio.h>

/**
   * main - Prints the alphabet in lowercase
   * Return: Zero
   */

int main(void)
{
	char buchstabe;

	for (buchstabe = 'a'; buchstabe <= 'z'; buchstabe++)
		putchar(buchstabe);
	putchar('\n');

	return (0);
}
