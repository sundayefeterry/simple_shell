#include "main.h"

/**
 *analyzer -  checks if the command matches any of the built-in commands.
 *@command: tokeniz the user input.
 *@buffer: user inline drived function.
 *
 *Return: 1 if success 0 if not successful
 */

int analyzer(char **command, char *buffer)
{
	int val = 1;
	int ng = 0;

	if (command_builtin(command, buffer))
	{
		return (val);
	}
	else if (**command == '/')
	{
		implementation(command[ng], command);
		return (val);
	}

	return (0);
}
