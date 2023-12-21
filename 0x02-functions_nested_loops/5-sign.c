#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: accepts value
 * Return: 1 and + if pos, -1 and - if neg, 0 and 0 for zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	return (0);
}
