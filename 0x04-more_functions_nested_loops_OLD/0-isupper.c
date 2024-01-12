#include "main.h"

/**
 * _isupper - Checks for upper case letter
 * @c: accepts variable
 * Return: 1 if c is uppercase, returns 0
 *
 */

int _isupper(int c)
{

	if (c > 64 && c < 91)
	{
	return (1);
	c++;
	}
	else
	{
	return (0);
	}
}
