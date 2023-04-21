#include "shell.h"
/**
 * print_out - prints the env string to standard output
 *
 * Return: NULL
 */
void print_out(void)
{
	int src;

	src = 0;

	char **env;

	env = environ;

	while (env[src])
	{
		write(STDOUT_FILENO, (const void *)env[src], _len_str(env[src]));
		write(STDOUT_FILENO, "\n", 1);

		src++;
	}
}
