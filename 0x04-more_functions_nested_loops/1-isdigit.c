#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks whether a character is a digit or not
 *
 * @c: input
 *
 * Return: 1 if 'c' is digit
 * 	 otherwise always 0 (Success)
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
