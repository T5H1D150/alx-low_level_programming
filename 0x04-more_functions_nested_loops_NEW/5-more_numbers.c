#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: Void
 */

void more_numbers(void)
{
	int row, num;

	for (row = 0 ; row <= 9 ; row++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num > 9)
			_putchar(49);
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
