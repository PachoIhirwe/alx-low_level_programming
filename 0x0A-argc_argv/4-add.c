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
	int num1, num2, result = 0, i, j, k;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
