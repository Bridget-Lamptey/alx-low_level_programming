#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int rn = 122;

	while (rn >= 97)
	{
		putchar(rn);
		rn--;
	}
	putchar('\n');
	return (0);
}
