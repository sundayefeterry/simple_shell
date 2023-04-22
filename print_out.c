#include "main.h"
/**
 * print_out - prints the env string to standard output
 *
 * Return: NULL
 */
void print_out(void)
{
	int src;

	char **env = environ;

	src = 0;

	while (env[src])
	{
		write(STDOUT_FILENO, (const void *)env[src], _len_str(env[src]));
		write(STDOUT_FILENO, "\n", 1);

		src++;
	}
}
