#include "main.h"

/**
 * print_last_digit - function that computes the last digit of a number
 * @a: is the int that will be used for the argument of the function
 * Return: 0
 */

int print_last_digit(int a)
{
	if (a > 0 || a == 0)
	{
		_putchar (a % 10 + '0');
		return (a % 10);
	}
	else
	{
		a = a * -1;
		_putchar (a % 10 + '0');
		return (a % 10);
	}
}
