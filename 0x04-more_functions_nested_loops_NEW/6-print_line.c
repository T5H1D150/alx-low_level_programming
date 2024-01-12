#include "main.h"

/**
 * print_line - draws a straight line
 * @n:  number of times the character _ should be printed
 * Return: Void
 */

void print_line(int n)
{
	int line;

	for (line = 0 ; line < n ; line++)
	{
	_putchar(95);
	}
	_putchar('\n');
}
