#include <time.h>
#include <stdio.h>
/**
 * main A
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d", n, x);
	if (x > 5)
	{
		printf("and is greater than 5")
	}
	if (x==0)
	{
			printf("and is greater than 5")
	}
	if (x<6 && x !=0")
	{
		printf("and is less that 6 not 0");
	}
	return (0);
}

