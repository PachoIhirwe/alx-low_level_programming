#include "main.h"

/**
 * _strlen_recursion - prints a string
 * @s: str to be printed
 *
 * Return: The lenth str
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
