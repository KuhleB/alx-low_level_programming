#include <stdio.h>

/**
 * main - prints numbers from 1 to 89, except multiples of 10 or 11
 * Return: 0 on success
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 < 90; num1++)
	{
		if (num1 % 10 != 0 && num1 % 11 != 0)
	}
	if (num1 / 10)
	{
		putchar(num1 / 10 + '0');
	}
	putchar(num1 % 10 + '0');
	if (num1 != 89)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

