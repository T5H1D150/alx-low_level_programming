#include <stdio.h>
/**
 * main - FizzBuzz
<<<<<<< HEAD
 * Return: 0 Always
=======
 * Return: O Always
 *
>>>>>>> 8981a77fb8ec3cd212e0ba96f35ee940ef2b5bae
 */

int main(void)
{
	int num;

<<<<<<< HEAD
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
		
=======
	for (num = 1 ; num <= 100 ; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else
			printf("%d", num);
		if (num <= 100)
			printf(" ");
>>>>>>> 8981a77fb8ec3cd212e0ba96f35ee940ef2b5bae
	}
	return (0);
}
