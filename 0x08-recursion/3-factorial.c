#include "main.h"

/**
 * factorial - prints a string
 * @n: str to be printed
 *
 * Return: The lenth str
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
