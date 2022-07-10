#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i;
	int m;

	for (i = 0; i < 15; i++)
	{
		for (m = 0; m < 10; m++)
		{
			_putchar(m + '0');
		}
	       _putchar(i + '0');
	}
	_putchar('\n');
}

