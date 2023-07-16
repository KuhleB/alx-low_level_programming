#include <stdio.h>

/**
 * main - Print message
 *
 * Return: 0 on success
 */

int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	putchar('\n');
	return (0);
}
