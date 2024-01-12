#include "main.h"

/**
 * print_line - prints straight line
 * @n: accepts value
 * Return: Void
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	
	for (j = 1; j <= n; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
