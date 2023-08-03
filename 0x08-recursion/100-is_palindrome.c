#include "main.h"

/**
  * _strlen_recursion - returns length of string
  * @s:input str length
  * Return: string length
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compares characters recursively for palindrome
 * @s: string to check
 * @n: iterator
 * @len: string length
 * Return: 1 if it is a palindrome, 0 if not.
 */

int compare_string(char *s, int n, int len)
{
	if (*(s + n) == *(s + len))
	{
		if (n == len || n == len + 1)
		return (1);
		return (0 + compare_string(s, n + 1, len - 1));
}
return (0);
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: input string
 * compare_string - checks char recursively for palindrome
 * Return: 0 if its not a palindrome and 1 if it is.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
