#include "main.h"
/**
 * jack_bauer - print minutes and hrs
 *
 * Return: 0 lways
 *
 */

void jack_bauer(void)
{
	int j, x;

	for (j = 0 ; j < 10 ; j++)
	for (x = 0 ; x < 10 ; x++)
	{
	_putchar(j + '0');
	_putchar(x + '0');
	_putchar('\n');
	}
}
