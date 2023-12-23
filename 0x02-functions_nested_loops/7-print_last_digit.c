#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @num: accepts value
 * Return: Last digit
 */

int print_last_digit(int num)
{
	int num2;

	if (num < 0)
		num = -num;

	num2 = num % 10;

	if (num2 < 0)
		num2 = -num2;

	_putchar(num2 + '0');
	return (num2);
}
