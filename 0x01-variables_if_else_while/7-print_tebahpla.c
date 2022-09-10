#include <stdio.h>

/**
 * main - prints alphabets in reverse and lower
 *
 * case followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
