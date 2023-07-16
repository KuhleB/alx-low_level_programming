#include <stdio.h>

/**
 * main - Prints all possible combinaions of two digit number, without error
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; j++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}