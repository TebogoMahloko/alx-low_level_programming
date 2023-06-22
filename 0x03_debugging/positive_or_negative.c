#include <stdio>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - print number
 * @i : integer
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
