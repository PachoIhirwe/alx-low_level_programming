#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prnts tyhe program
 * @argc: Count arguments
 * @argv: Aruments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a == atoi(argv[1]);
		b == atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("error \n");
	return (1);
}
