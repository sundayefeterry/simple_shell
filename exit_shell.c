#include "shell.h"
/**
 * exit_shell - manages the execution of the shell exit
 * @line: input read from standard input
 * @command: tokenized command
 *
 * Return: 0
 */
void exit_shell(char **command, char *line)
{
	free(NULL);
	free_buffers(NULL);
	exit(0);
}
