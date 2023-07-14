#include <stdio.h>

/**
 * main - entry point
 *
 * return: always 0
 * (success)
 */
void main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
