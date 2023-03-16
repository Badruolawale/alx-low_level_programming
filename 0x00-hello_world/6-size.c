#include <stdio.h>
/**
 * main - print out data size c
 * Return: 0
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int w;
	float g;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of long int: %lu byte(s)\n", i(unsigned long)sizeof(z));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(g));
	return (0);
}
