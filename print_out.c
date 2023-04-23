#include "main.h"

/**
 * print_out - prints the string to --> standard output
 * 
 * Return: NULL
 */

void print_out(void)
{
	int src;

	int val;

	char **env = environ;

	src = 0;

	val = 1;

	while (env[src])
	{
		write(STDOUT_FILENO, (const void *)env[src], _len_str(env[src]));
		write(STDOUT_FILENO, "\n", val);

		src++;
	}
}
