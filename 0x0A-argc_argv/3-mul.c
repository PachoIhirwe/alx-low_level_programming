#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int result;

	if (argc != 3)
	{
	printf("error \n");
	return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
}
