#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last digit if a number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	printf("Last digit of %d is %d", n, m);
	if (m > 5)
	{
		printf("and is greater than 5");
	}
	if (m == 0)
	{
		printf("and is 0");
	}
	if (m < 6 && m != 0)
	{
		printf("and less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
