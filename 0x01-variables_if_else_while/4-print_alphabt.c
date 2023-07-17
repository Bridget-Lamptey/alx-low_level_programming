#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all letters of the alphabet except q and e,
 * followed by a new line
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int alphbt = 97;

	while (alphbt <= 122)
	{
		if (alphbt == 101 || alphbt == 113)
		{
			alphbt++;
			continue;
		}
		putchar(alphbt);
		alphbt++;
	}
	putchar('\n');
	return (0);
}
