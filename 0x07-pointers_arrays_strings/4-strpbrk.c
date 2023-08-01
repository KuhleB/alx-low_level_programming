#include "main.h"

/**
 * _strpbrk - located the first occurance in the string s
 * of any of the bytes in the string accept
 * @s: string input
 * @accept: the byte in string input
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
