#include "main.h"
/**
 * times_table - print times table up to x9
 *
 * Return: Void
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (i * j > 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((i * j) + '0');
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
