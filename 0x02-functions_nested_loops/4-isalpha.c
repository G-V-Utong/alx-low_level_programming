#include "main.h"

/**
 * _isalpha - function to check if a is a letter, lowercase
 * or uppercase
 * @a: is the int that will be used fpr the argument of the function
 *
 * Return: 0
 */

int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
