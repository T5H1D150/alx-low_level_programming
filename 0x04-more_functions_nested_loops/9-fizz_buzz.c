#include <stdio.h>
/**
 * main - FizzBuzz
 * Return: 0 Always
 */

int main(void)
{
	int num;

	for (num = 0 ; num <= 20 ; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz");

			if (num % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
			printf("%d", num);
			}
		}
		printf(" ");
		
	}
	return (0);
}
