#include <stdio.h>

/**
 *  main - prints the size of types
 *
 *  Description: This program prints
 *
 *  the size of various types on the
 *
 *  computer it is compiled and run on
 *
 *  Return: 0
 */

int main(void)
{
	char c;
	float f;
	int i;
	long li;
	long long lli;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of long int: %ld byte(s)\n", sizeof(li));
	printf("Size of long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
