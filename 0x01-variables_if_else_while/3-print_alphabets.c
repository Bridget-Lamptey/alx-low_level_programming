#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints alphabets in lower case, then in upper case,
 * followed by a new line
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int lc = 97;
	int up = 65;

	while (lc <= 122)
	{
		putchar(lc);
		lc++;
	}
	while (up <= 90)
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
