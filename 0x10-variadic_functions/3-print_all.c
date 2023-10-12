#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: Zero
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *st;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			st = va_arg(valist, char *), c = 1;
			if (!st)
			{
				printf("(nil)");
				break;
			}
			printf("%s", st);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
