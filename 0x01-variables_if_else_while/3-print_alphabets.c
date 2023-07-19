#include <stdio.h>

/**
 * main - Print alphabets in lower and uppercase
 *
 *Return: 0 Always
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
	putchar(lower);
	lower++;
	}
	while (upper <= 'Z')
	{
	putchar(upper);
	upper++;
	}
putchar('\n');
return (0);
}
