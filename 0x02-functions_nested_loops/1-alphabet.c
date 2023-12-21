#include "main.h"

/**
 * print_alphabet - Prints Alpha
 *
 * Returns: 0 always
 *
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	_putchar(alpha);
	alpha++;
	}
	_putchar('\n');
}
