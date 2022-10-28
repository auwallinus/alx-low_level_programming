#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * 
 * Return: If and error occurs - -1.
 * 	   Otherwise - 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
