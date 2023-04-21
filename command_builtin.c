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
	struct standardbuiltin standardbuiltin =  {"environment", "quit"};

	int vall = 1;

	if (_checkingtrings(*command, standardbuiltin.environment) == 0)
	{
		print_out();
		return (vall);
	}

	if (_checkingtrings(*command, standardbuiltin.quit) == 0)
	{
		exit_shell(command, commandpath);
		return (vall);
	}

	return (0);
}
