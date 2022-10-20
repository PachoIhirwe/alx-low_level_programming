#include "main.h"

/**
 * largest_number - returns the largest 3 numbers
 * @a: firstint
 * @b: second int
 * @c: third int
 * Return: lartgest
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);

}
