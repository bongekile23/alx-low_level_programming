#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
