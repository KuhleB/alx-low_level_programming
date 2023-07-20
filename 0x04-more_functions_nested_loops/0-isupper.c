#include "main.h"

/**
 * _isupper - check the code for lowercase character.
 * @c: Character to be checked
 * Return: 1 for uppercase characters or 0 for anything else.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
