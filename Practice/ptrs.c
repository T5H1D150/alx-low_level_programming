#include <stdio.h>
/**
 * main - pointers
 * Retun: 0 always
 */

int main(void)
{
	int n;

	int *p;

	n = 20;

	p = &n;

	printf("n Value is %d \n", n);
	printf("n Address is %p \n", p);

	return (0);
}
