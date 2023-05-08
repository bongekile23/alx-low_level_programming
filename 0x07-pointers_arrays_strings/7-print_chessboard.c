#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchara([i][j]);
		_putchar('\n');
	}
}
