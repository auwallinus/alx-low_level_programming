#include <stdio.h>
#include "main.h"

/** 
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array of pointers to the arguments.
 * Author: Auwal Linus - Lagos Intranet.
 * Return: 0
 */
int main(int argc, char __attribute__((unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
