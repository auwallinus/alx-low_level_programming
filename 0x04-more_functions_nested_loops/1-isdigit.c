#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: input
 * Return: 1 is it is, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	
	else
		return (0);
}
