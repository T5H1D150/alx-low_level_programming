#include "main.h"

/**
 * _islower - Is character lower or upper case
 * @c: accepts character
 * Return: 1 if c is lower case, else returns 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
