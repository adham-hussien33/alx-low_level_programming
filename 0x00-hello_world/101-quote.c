#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a message to the standard error using the `write` function
 * Return: Always 1 (Error)
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(msg) - 1;
	ssize_t ret = write(2, msg, len);
	return (ret == len) ? 1 : -1;
}

