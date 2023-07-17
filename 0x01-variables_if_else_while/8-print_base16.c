#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the numbers of base 16 in lowercase,
 * followed by a new line, thus, 0123456789abcdef
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n = 48;
	int lc = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (lc <= 102)
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
