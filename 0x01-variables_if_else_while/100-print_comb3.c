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

	for (n = 48; n <= 58; n++)
	{
		for (m = 48; m <= 58; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}