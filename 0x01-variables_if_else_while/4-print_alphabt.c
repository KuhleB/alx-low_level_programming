#include <stdio.h>

/**
 * main - Print message
 *
 * Return: 0 on success
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
	{
		lowercase += 1;
	}
		else
	{
		putchar(lowercase);
		lowercase += 1;
	}
	}
	putchaar('\n');
	return (0);
}
