#include "main.h"

/**
 * _puts - prints a srting
 * @str: string be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
