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

	if (a > b && a > c)
	{
	largest = a;
	else if (b > c && b > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest);

}
