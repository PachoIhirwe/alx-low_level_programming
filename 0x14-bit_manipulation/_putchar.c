#include "main.h"
#include "unistd.h"

/**
 * _putchar - writes char
 * @c: the character
 * Return: on sucess
 */

int _putchar(char c)
{
	return (wwrite(1, &c, 1));
}

