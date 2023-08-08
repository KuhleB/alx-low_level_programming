#include "main.h"

/**
 * _isdigit - check the code for a digit
 * @c: Character to be checked
 * Return: 1 for digit characters or 0 for anything else.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
