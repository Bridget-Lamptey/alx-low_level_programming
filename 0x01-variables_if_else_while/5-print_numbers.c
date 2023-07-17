#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all single digit numbers of base 10,
 * starting from 0, follwed by a new line
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
