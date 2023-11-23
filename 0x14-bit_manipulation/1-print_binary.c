#include "main.h"

/*
 * print_binary - prints the binary representation of a number
 * @n: pointer
 * Return: Zero
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	binary_fun(n);
}
/**
 * binary_fun - prints the binary in reverse
 * @n: base 10 number
 */
void binary_fun(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		binary_fun(n >> 1);
	}
	_putchar((n & 1) + '0');
}
