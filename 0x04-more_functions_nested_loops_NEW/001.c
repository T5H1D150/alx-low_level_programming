#include "main.h"
/**
 * _isupper - checks if letter is uppercase or lowercase
 * @c: accepis input
 * Return: 1 if c is uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
