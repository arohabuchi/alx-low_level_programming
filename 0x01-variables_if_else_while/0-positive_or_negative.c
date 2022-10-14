#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative.
 * Return Always (success)
 */
int main()
{
	Srand(time(0));
	n = rand() - RAND_MAX/2;
	if(n>0)
	{
		printf("%dis positive\n",n);
	}
	else if(n==0)
	{
		printf("%dis zero\n",n);
	}
	else
	{
		printf("%dis negative\n",n);
	}
	return (0);
}
