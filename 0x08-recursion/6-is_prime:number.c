#include "main.h"

int is_divisible(int num, int div)
int is _prime_number(int n)

/**
 * is_divisible -checks if number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: lf the number is divisible -0.
 * lf the numberbis not divisible -1.
 */
int is_prime_number(int n)
{
	if (num % div == 0)
		return (0);
	if (div == num/2)
		return (1);
	return (is_divisible(num, div + 1));
}
