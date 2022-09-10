#include <stdio.h>

/**
 * main - prints all single numbers
 *
 * between 0 and 10.
 *
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}

	putchar('\n');

	return (0);
}
