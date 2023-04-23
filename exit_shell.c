#include "main.h"
/**
 * exit_shell - manages the execution of the shell exit
 * @line_tkn: input read from standard input
 * @command: tokenized command
 * Return: NULL
 */
void exit_shell(char **command, char *line_tkn)
{
	free(line_tkn);
	free_buffer_function(command);
	exit(0);
}
