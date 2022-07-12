#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i, k, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (k = len - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}


