/*
 * File is for Positive anything is better than negative nothing
 * AMAHDY
 */

#include <stdio.h>
#include <time.h>

/**
  * main - Prints whether the number variable n is positive or negative
  * Return: Zero
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);

}