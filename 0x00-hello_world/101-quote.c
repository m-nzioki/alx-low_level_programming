#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry Point
 *
 * Return: 1 when successful
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, STDERR_FILENO, msg, sizeof(msg) -1);
	return (1);
}
