#include <stdio.h>

/**
 * main - prints the name of a file which it was compiled from
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}