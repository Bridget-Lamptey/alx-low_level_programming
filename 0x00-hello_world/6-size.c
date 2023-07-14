#include <stdio.h>

/**
 * main - entry point
 *
 * return: 0 (success)
 */
int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(lli));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
}
