#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode a string using rot13
 * @s: pointer to string param
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int i;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"
	;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[a] == data1[i])
			{
				s[a] = datarot[i];
				break;
			}
		}
	}
	return (s);
}
