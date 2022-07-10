#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i, m;

	for (i = 0; i < 10; i++)
	{
		for (m = 1; m < 15; m++)
		{
			if (m >= 10)
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
	}
	_putchar('\n');
}

