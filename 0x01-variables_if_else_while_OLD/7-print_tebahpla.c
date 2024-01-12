#include <stdio.h>
/**
 * main - Alpha in rev
 *
 * Return: 0 Always
 *
 */

int main(void)
{
	char rev;

	for (rev = 'z' ; rev >= 'a' ; rev--)
	{
	putchar(rev);
	}
	putchar('\n');
	return (0);
}
