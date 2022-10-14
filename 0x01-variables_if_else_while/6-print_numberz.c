#include <stdio.h>

/**
 * main - Print from 9 to 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n >= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
