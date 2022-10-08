#include <stdlib.h>

/**
 * malloc_checked - Main Entry
 * @b: input
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == 0)
	exit(98);
return (m);
}
