#include "main.h"

/**
 * _isalpha - checkls small or big
 * @c: a character argument
 * Return: returns 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
