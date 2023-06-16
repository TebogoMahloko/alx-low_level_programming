#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: using sizef to print the size of various typs
 *
 *  Return: 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zu bytes(s)", sizeof(char));
	printf("Size of an int: %zu bytes(s)", sizeof(int));
	printf("Size of a long int: %zu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)", sizeof(long long int));
	printf("Size of a float: %zu bytes(S)", sizeof(float));
	return (0);
}
