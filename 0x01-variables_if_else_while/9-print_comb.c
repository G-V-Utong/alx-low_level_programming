#include <stdio.h>

/**
 * main - prints all possible combinations
 *
 * of single digit numbers seperated by ,.
 *
 * Return: Always 0
 */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
		if (b != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
