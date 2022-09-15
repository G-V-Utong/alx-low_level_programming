#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: the int fo r the parameters of the function
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
