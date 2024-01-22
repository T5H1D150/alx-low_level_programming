#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: accepts string
 * Return: void
 */

void print_rev(char *s)
{
	int x;
	int ind = 0;

	for (x = 0; s[x] != '\0'; x++)
		ind++;
	for (x = ind - 1; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
