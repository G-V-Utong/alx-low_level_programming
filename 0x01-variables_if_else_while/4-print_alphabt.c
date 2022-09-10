#include <stdio.h>

/**
 * main - print lowercase alphabets without
 * 'e' and 'q'
 *
 * Return: Always 0
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if  ((lower != 'e') && (lower != 'q'))
		{
			putchar(lower);
		}
		lower++;
	}

	putchar('\n');

	return (0);
}
