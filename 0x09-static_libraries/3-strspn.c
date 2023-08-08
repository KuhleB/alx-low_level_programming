#include "main.h"

/**
 * _strspn - returns number of bytes in initial segment of s
 * consisting only of bytes from accept
 * @s: the initial segment input
 * @accept: byte input
 * Return: 0 on success.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				l++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (l);
		}
		s++;
	}
	return (l);
}
