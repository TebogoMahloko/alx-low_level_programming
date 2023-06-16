#include <stdio.h>

/**
 *  main - A program that prints te  size of verious various computer types
 *
 *  Return : 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu bytes(S)\n", sizeof(float));
	return (0);
}
