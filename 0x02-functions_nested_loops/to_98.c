#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: accepts value
 * Return: Void
 */

void print_to_98(int n)
{
	if (n == 98)
	{
	printf("%d", n);
	}
	putchar('\n');
	while (n <= 98)
	{
	printf("%d", n);
	printf(",");
	printf(" ");
	n++;
	}
	putchar('\n');
	while (n >= 98)
	{
	printf("%d", n);
	printf(",");
	printf(" ");
	n--;
	}
	putchar('\n');
}
