#include <stdio.h>

/**
 * main - Entry point
 *  prints all single digit numbers of base 10 starting from 0,
 *  followed by a new line
 *  You are not allowed to use any variable of type char
 *  Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 12; n < 22; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
