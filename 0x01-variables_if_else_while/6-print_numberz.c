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
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
