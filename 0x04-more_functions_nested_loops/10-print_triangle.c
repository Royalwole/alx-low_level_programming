#include "main.h"

/**
 * print_triangle: output a triangle
 * @size: size of triangle
 *
 * always return 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= (size - a))

				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');

		return(0);
	}

}
