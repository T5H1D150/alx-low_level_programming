#include "main.h"
/**
 * _isalpha - accepts value
 * @c: value
 * Return: 1 if c is a letter, else 0
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 93)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
