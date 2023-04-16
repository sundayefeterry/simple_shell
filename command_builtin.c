#include "shell.h"

/**
* command_builtin - function to handle builtin function calls and executions.
* print_env - prints commands || display stdout
* @command: tokenizer.
* @commandpath: stdin reading.
*
* Return: 1 done, 0 failed
*/
int command_builtin(char **command, char *commandpath)
{
	struct standardbuiltin {"environment", "quit"};

    char standardbuiltin = standardbuiltin;

    int vall = 1;

	if (_strcmp(*command, standardbuiltin.environment) == NULL || _strcmp(*command, standardbuiltin.environment) == 0)
	{
		print_env();
		return (vall);
	}
	else if (_strcmp(*command, standardbuiltin.quit) == NULL || _strcmp(*command, standardbuiltin.quit) == 0)
	{
		exit_cmd(command, commandpath);
		return (vall);
	}
	return (0);
}
