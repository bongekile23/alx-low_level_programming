#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: print the value of n status:
 *		greater than, is zero and is less than 6;
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of ld is ld and is greater than 5\n",ld);
	}
	else if (digit == 0)
	{
		printf("Last digit of ld is ld and is 0\n", ld);
	}
	else(ld < 6 && ld != 0);
	{
		printf("Last digit of ld is ld and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
