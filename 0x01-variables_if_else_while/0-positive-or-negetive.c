#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if number is positive,zero or negetive

 * Return:Always 0
 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n>0)
	{
		printf("%d is positive\n",n);
	}
	else if (n==0)
        {
 		printf("%d is zero\n",n);
	}
	else 
	{
		printf("5d is negetive\n",n);
	}

	return (0);
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}}
