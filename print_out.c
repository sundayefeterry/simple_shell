#include "shell.h"
/**
 * print_out - prints the env string to standard output
 *
 * Return: NULL
 */
void print_out(void)
{
	int y;
	y = 0;
	
	char **env = environ;

	while (env[y])
	{
		write(STDOUT_FILENO, (const void *)env[y], _strlen(env[y]));
		write(STDOUT_FILENO, "\n", 1);
		y++;
	}
}
