#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @n: int value
 * @separator: char
 * Return: Zero
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *st;

	va_start(valist, n);
	for (i = 0 ; i < n ; i++)
	{
		st = va_arg(valist, char*);
		if (st  == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}
		if (separator != 0 && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);
	printf("\n");
}
