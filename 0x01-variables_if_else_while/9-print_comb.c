#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will print all possible combinations of single-digit numbers.
 * These numbers will be separated by a comma and a space. Eg, 0, 1, ...,9
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
