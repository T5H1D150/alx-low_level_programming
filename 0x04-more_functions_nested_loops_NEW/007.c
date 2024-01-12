#include "main.h"
/**
 * print_diagonal - prints diag line
 * @n: accepts value
 * Return: void
 */

void print_diagonal(int n)
{
	int j, w;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (j = 1; j <= n; j++)
	{
		for (w = 1; w <= n; w++)
		{
			if (j == w)
				_putchar(92);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}
