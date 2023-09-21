#include "main.h"

/**
 * print_sign - checks if value is +ve or -ve
 * @n: accepts value
 * Return: 1 if +ve, 0 if 0 and -1 if -ve
 */

int print_sign(int n)
{
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
	else
	{
	_putchar(45);
	return (-1);
	}
}
