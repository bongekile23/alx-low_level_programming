#include "main.h"

/**
 * get_endianness - checks if a machine is little or small or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 0;
	char *c = (char *) &i;

	return (*c);
}
