#include <stdio.h>
#define NAME_F

/**
 * main - prints the name of the file it was compiled from.
 * Return: Always 0.
 */
int main(void)
{
	#ifdef NAME_F
		printf("%s\n", __FILE__);
	#endif
	return (0);
}
