#include "main.h"
/**
 * print_alphabet_10 -> prints the lower case aplhabet
 */
void print_alphabet_10(void)
{
	int i;
	int j;
	
	for (j = 0; j < 10,j++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
