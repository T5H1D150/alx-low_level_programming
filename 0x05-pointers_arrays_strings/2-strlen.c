#include "main.h"
/**
 * _strlen - function for length of string
 * @s: Accepts string
 * x being string, leng being index in string, '\0' means end of str
 * Return: string length value
 */

int _strlen(char *s)
{
	int x;
	int leng = 0;

	for (x = 0; s[x] != '\0'; x++)
	leng++;

	return (leng);


}
