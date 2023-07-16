#include <stdio.h>

/**
 * main - Generates and prints a random number
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar (i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
