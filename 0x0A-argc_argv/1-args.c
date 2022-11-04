#include <stdio.h>
#include "main.h"

/**
 * main - prnts tyhe program
 * @argc: Count arguments
 * @argv: Aruments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
