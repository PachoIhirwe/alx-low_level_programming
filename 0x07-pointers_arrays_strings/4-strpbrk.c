#include "main.h"

/**
 * _strpbrk - search for a string of set tupes
 * @s: source string
 * @accept: accept a char
 *
 * Return: the string since
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0')
}
