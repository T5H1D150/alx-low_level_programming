#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: times \ should be printed
 * Return: Void
 */

void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (line = 0 ; line < n ; line++)
	{
		for (space = 0 ; space < n ; space++)
		{
			if (line == space)
				_putchar(92);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}
