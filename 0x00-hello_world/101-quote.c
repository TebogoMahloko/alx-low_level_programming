#include <unistd.h>
#include <sys/syscall.h>
/**
 *  main - Entry point
 *
 *  Description: Prints a specific  message to standard error
 *
 *  Return: Always 1
 */

int mani(void)
{
	const char *message =
		"and that pieace of art ix useful\" - Dora Kopar, 2015-10-19\n";
	size_t len = 59; /* Length of the message */

	syscall(SYS_write, STDERR_FILENO, message, len);
	return (1);
}
