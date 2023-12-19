#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always
 *
 */

int main(void)
{
	char ALP = 'a';

	while (ALP <= 'z')
	{
		if (ALP != 'e' && ALP != 'q')
		{
		putchar(ALP);
		ALP++;
		}
	}
	putchar('\n');
	return (0);
}
