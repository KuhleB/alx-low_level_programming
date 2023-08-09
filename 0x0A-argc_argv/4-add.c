#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int x, y, add = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
	if (!isdigit(argv[x][y]))
	{
		printf("%s\n", "Error");
		return (1);
	}
		}
add += atoi(argv[x]);
}
printf("%d\n", add);
return (0);
}
