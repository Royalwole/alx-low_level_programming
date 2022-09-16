#include "main.h"
#include <stdio.h>

/**
 * main start
 *
 *out put the figures 1 - 100 w/
 * Fizz for multiples of 3 and Buzz for multiples of 5,
 * while FizzBuzz for multiples of both
 *
 * Always return 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
