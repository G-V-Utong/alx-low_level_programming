#include <stdio.h>

/**
 * main - prints all possible combination of
 *
 * two-digit numbers without duplicates.
 *
 * Return: Always 0
 */

int main(void)
{
	int singles;
	int doubles;

	for (doubles = '0'; doubles <= '9'; doubles++)
	{
		for (singles = (doubles + '1'); singles <= '9'; singles++)
		{
			putchar(doubles);
			putchar(singles);

			if (doubles != '8' && singles != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
