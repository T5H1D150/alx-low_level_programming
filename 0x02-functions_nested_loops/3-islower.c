#include "main.h"

/**
 * _islower - entry point
 * @c: Alphabet
 * Return: 1 if c is lowercase, else 0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
