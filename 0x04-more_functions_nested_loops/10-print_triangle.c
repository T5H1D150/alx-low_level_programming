#include "main.h"
/**
 * print_triangle - prints shape
 * @size: triangle size
 * Return: Void
 */

void print_triangle(int size)
{
	int row, insert, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (space = size - row ; space >= 1 ; space--)
			{
			_putchar(32);
			}
			for (insert = 1 ; insert <= row; insert++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
