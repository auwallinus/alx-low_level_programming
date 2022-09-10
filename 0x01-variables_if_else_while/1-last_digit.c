#include <stdio.h>

/**
* main - Prints the alphabet.
*
* Return: 0
*/
int main(void)
{
	char alp[26] = "abcdefghijklmopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
{
	putchar(alp[i]);
}
	putchar('\n');
return (0);
}
