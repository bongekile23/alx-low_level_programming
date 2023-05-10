#include "main.h"

int actual_prime(int n, int i);

/**
 * actual_prime - calculates if a number is prime recursively
 * @num: The number to be checked.
 * @i: iterator
 * Return: 1 if n is prime,0 if not
 */
int actual_prime(int i, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
/**
 * is-prime_number - says if the integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if  n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number(n, n - 1));
}
