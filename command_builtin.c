#include "main.h"

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
	int ng = 0;

	struct standardbuiltin standardbuiltin =  {"env", "exit"};

	int vall = 1;

	if (_checkingtrings(*command, standardbuiltin.env) == ng)
	{
		print_out();
		return (vall);
	}

	else if (_checkingtrings(*command, standardbuiltin.exit) == ng)
	{
		exit_shell(command, commandpath);
		return (vall);
	}

	return (0);
}
