#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int i;

	char q[] = "_putchar";

		for (i = 0 ; i <= 7 ; i++)
		{
		_putchar(q[i]);
		}
	_putchar('\n');
	return (0);
}
