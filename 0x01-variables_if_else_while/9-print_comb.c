#include <stdio.h>

/**
 *main - prints combo of single digit number
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 5)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
