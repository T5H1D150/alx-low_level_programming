#include "main.h"

/**
 * print_square - prints a square
 * @size: Size of square
 * Return: Void
 */

void print_square(int size)
{
	int row, num;

	if (size <= 0)
	{
	_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (num = 1; num <= size; num++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
