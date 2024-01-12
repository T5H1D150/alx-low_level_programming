#include "main.h"
/**
 * jack_bauer - print minutes and hrs
 *
 * Return: 0 lways
 *
 */

void jack_bauer(void)
{
	int j;
	int x;

	for (j = 0 ; j < 10 ; j++)
	{
	_putchar(48);
	_putchar(j + '0');
	_putchar('\n');
	}
	for (x = 10 ; x < 24 ; x++)
	{
	_putchar(x + '0');
	_putchar('\n');
	}
	
}
