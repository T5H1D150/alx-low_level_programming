#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
	putchar(num + '0');
	putchar(44);
	putchar(32);
	num++;
	}
	putchar('\n');
	return (0);
}
