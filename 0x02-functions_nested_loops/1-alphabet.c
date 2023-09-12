#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line
 * Return: zero
 */
void print_alphabet(void)

{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
