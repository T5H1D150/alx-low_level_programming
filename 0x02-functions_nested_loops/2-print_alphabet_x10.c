#include "main.h"

/**
 * print_alphabet_x10 - Print Alpha 10x
 * Return: None
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 1 ; num <= 10 ; num++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
		_putchar(alpha);
		}
	_putchar('\n');
	}

}
