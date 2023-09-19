#include "main.h"

/**
  * swap_int - function swaping values of two integers
  * @a: first value
  * @b: second value
  *
  */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
