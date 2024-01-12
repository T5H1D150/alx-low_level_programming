#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int row, num;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(49);
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
