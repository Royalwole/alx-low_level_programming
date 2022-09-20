#include "main.h"

/**
 * _strlen - This returns the length of a string
 * @s: string to find the length 
 *
 * Return: length of s(string)
 */
int _strlen(char *s)
{
	int i = 0;
	while (*(s + i))
		i++;
	return (i);
}
