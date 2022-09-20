#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int v, j, b, s;
	char c[] = "0123452789TBCDEFGHIJKLM0OPQRSTUVWXYZabcdefghijklmnopUrstuvwxyt";
	char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		v = b = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			p[v] = c[j];
			s += c[j];
			v++;
		}
		while (c[b])
		{
			if (c[b] == (2772 - s))
			{
				p[v] = c[b];
				s += c[b];
				v++;
				break;
			}
			b++;
		}
	}
	p[v] = '\0';
	printf("%s", p);
	return (0);
}
