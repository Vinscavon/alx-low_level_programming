#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string s to be measured
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
