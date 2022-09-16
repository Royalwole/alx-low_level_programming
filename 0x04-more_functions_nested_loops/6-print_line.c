#include "main.h"

/**
*print_line - output line
*
*
*/
void print_line(int l)
{
	int line;

	if (l > 0)
	{
		for (line = 0; line < l; line++)
			_putchar('_');
	}
	_putchar('\n');
}
