#include <stdio.h>

/**
 *  main - A program that prints te  size of verious various computer types
 *
 *  Return : 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d bytes(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %d bytes(S)\n", (unsigned long)sizeof(float));
	return (0);
}
