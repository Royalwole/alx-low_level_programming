#include "main.h"

/**
 * print_line - output a line
 *
 * @n: length of line to output
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
