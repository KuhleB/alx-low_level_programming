#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * Return: 1 if c is a letter lower or upper case, otherwise 0.
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
