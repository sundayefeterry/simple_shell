#include "main.h"
/**
 * implementation - performs instructions provided by users.
 * @command: array of vector pointers **commands.
 * @exe: exe.
 * Return: 0
 */
void implementation(char *exe, char **command)
{
	pid_t child_pid;

	int status;

	char **environment;

	environment = environ;

	child_pid = fork();

	if (child_pid < 0)
	{
		perror(exe);
	}

	if (child_pid == 0)
	{
		execve(exe, command, environment);
		perror(exe);
		free(exe);
		free_buffers(command);
		exit(98);
	}
	else
		wait(&status);
}
