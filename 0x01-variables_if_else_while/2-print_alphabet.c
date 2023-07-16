#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabets in lower case, followed by a new line
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int alph = 97;

	while (alph <= 122)
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
