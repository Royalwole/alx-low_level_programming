#include "main.h"

/**
 * print_numbers - A function that prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int k = '0';

	while (k <= '9')
	{
		_putchar(k);
		k++;
	}
	_putchar('\n');
}
