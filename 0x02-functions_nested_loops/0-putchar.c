#include "main.h"

/**
 * main - program that prints '_putchar'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char put[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	unsigned int a;

	for (a = 0; a < sizeof(put); a++)
	{
		_putchar(put[a]);
	}

	_putchar('\n');
	return (0);
}
