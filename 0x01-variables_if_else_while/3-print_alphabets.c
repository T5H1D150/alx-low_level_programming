#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 Always
 *
 */

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	while (ALPHA <= 'Z')
	{
	putchar(ALPHA);
	ALPHA++;
	}
	putchar('\n');
	return (0);
}
