#include<stdio.h>

/**
 * main - prints fromn 1 to 16 in lower case
 * Return: always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 16; num++)
	{
	putchar((num % 16) + '0');
	}
	for (la = 'a'; la <= 'p'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
