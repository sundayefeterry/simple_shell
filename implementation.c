#include "main.h"

/**
 * implementation - performs instructions provided by users.
 * @command: array of vector pointers **commands.
 * @exe: exe.
 *
 * Return: 0
 */

void implementation(char *exe, char **command)
{
	pid_t child_pid;

	int status;
	int ng = 0;

	char **env;

	env = environ;

	child_pid = fork();

	if (child_pid < ng)
	{
		perror(exe);
	}

	if (child_pid == ng)
	{
		execve(exe, command, env);
		perror(exe);
		free(exe);
		free_buffer_function(command);
		exit(98);
	}
	else
		wait(&status);
}
