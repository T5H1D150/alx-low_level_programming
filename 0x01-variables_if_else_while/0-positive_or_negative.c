#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - Entry Point
 * Function to test if random number is pos or neg
 *
 * Return: 0 Always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
