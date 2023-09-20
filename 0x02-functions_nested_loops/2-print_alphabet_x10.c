#include "main.h"

/**
 * print_alphabet_x10 - Print alpha 10x
 *
 */

void print_alphabet_x10(void)
{
	char alpha;

	int row;

	for (row = 1 ; row <= 10 ; row++)
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
		_putchar(alpha);
		while (alpha = 'z')
		{
		_putchar('\n');
		}
		}
}
