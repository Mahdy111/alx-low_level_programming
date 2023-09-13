/*
 * File works on Time tables
 * AMAHDY
 */

#include "main.h"

/**
  * print_times_table - Prints the n times table, starting with 0
  * Return: zero
  * @n: Mutiplication value
  */

void print_times_table(int n)
{
	int m, p, s;

	if (!(n > 15 || n < 0))
	{
		for (m = 0; m <= n; m++)
		{
			for (p = 0; p <= n; p++)
			{
				s = (m * p);

				if (p != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (s < 10 && p != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((s % 10) + '0');
				}
				else if (s >= 10 && s < 100)
				{
					_putchar(' ');
					_putchar((s / 10) + '0');
					_putchar((s % 10) + '0');
				}
				else if (s >= 100 && p != 0)
				{
					_putchar((s / 100) + '0');
					_putchar((s / 10) % 10 + '0');
					_putchar((s % 10) + '0');
				}
				else
					_putchar((s % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
