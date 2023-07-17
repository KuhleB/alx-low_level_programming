#include <stdio.h>

/**
 * main - prints combination of  numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 < 58; num1++)
	{
	num2 = 49 + (num1 - 48);
	for (; num2 < 58 ; num2++)
	{
		putchar(num1);
		putchar(num2);

	if (num1 == 56 && num2 == 57)
	{
		continue;
	}
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

