#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/**
 * main determines f the last digit of n is greater than 5: the string and is greater than 5
 * Return: 0
 */
int main(void)
{
	int n,l;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l >5 )
	{
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("the last digit of %d is %d and is not great than 5 and is not 0\n", n, l);
	}
	return 0;
}
