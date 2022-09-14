#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rw = row, clm = column, dg = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int rw, clm, dg;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (clm = 1; clm <= 9; clm++)
		{
			dg = (rw * clm);
			if ((dg / 10) > 0)
			{
				_putchar((dg / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (clm < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
