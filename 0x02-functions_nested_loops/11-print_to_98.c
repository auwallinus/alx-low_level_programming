#include <main.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: input integer from which the count starts until 98
 * 
 * Return: 0 on success
 */

void print_to_98(int n)
{
	int delta = 1;
	int current = n;

	if (n > 98)
		delta = -1;

	/*print current n*/
	if (current < 0)
		_putchar('-');
	print_any_int(n);

	while (current != 98)
	{
		_putchar(',');
		_putchar(' ');
		current = current + delta;
		if (current < 0)
			_putchar('-');
	print_any_int(current);
	}
	_putchar('\n');
}
