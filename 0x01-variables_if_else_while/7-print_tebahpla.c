#include <stdio.h>

/**
 * main - Prints lowercase aplhabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
