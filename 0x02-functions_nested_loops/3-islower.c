#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @a: is the int that will be used for the argument of the function
 * Return: 0
 */

int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
