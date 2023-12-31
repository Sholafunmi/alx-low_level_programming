#include "main.h"

/**
 * set_bit - This sets the value of a bit at a specified index to 1.
 * @n: This is pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 * Return: If an error occurs - -1.
 * Otherwise - 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
