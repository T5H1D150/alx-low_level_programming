#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 Always
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
