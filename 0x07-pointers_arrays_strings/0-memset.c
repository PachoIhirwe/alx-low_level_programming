#include "main.h"

/**
 * _memset - a function that fills memory with cons type
 * @s: input var char
 * @n: unassigned number
 * @b: input var char type
 *
 * Return: a pointer filled momory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
