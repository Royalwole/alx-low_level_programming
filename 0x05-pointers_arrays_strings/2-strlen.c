#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string to find the lenght
 *
 * Return: lenght of s
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
