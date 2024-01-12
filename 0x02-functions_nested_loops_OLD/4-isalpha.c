#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: accepts input
 * Return: 1 if upper or lower case, else 0
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
