#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: pass the argument
 * Return: last digit
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		n = -n;
	j = n % 10;
	_putchar(j + '0');
	return (n % 10);
}

