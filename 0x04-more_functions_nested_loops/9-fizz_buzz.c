#include "main.h"
#include <stdio.h>

/**
 *Out put fizzbuzz
 *
 * Always return 0
 */
int main(void)
{
	int i;

	putchar('1');
	for (i = 2; i <= 100; i++)
		if (i % 15 == 0)
			printf(" FizzBuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else
			printf(" %d", i);
	putchar('\n');

	return (0);
}
