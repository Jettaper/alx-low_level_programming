#include "main.h"

/**
 * clear_bit - it sets the values of a given bit to 0
 * @n:is a  pointer to the number to change
 * @index:its the index of the bit to clear
 *
 *  Return:the output would be  1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


