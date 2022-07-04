#include<stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of two digits
 * Numbers must be separated by ,
 * followed by a space
 * The two digits must be different
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (m = 1; m < 100; m++)
	{
		for (m = n;;)
		{
			if (i / 10 % 10 > i % 10) break;
			 if ((i /= 10) == 0)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
