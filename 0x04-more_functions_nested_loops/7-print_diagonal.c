#include "main.h"

/**
 * print_diagonal: print a diagonal line of backslashes
 *
 * @n: length of line to output
 *
 * Return: void
 */
void print_diagonal(int k)
{
	int i;
	int l = k;

	if (k <= 0)
		_putchar('\n');

	for (; k > 0; k--)
	{
		for (i = 0; i < l - k; k++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
