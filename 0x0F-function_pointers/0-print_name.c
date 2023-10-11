#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: is pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
