#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int dg)
{
	int prlsd;

	prlsd = (dg % 10);

	if (prlsd < 0)
	{
		prlsd = (-1 * prlsd);
	}

	_putchar(prlsd + '0');
	return (prlsd);
}
