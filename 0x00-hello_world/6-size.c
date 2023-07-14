#include <stdio.h>
/**
  * main - Print Message
  * return: 0 (success)
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)
	sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long in: %lu byte(s)\n", sizeof(c);
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d)
	printf("Size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
