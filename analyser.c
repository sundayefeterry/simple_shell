#include "shell.h"
/**
 *analyser - checks if the function is built in.
 *@command: tokeniz the user input.
 *@buffer: user inline drived function.
 *
 *Return: 1 if success 0 if not successful
 */

int analyser(char **command, char *buffer)
{
	int val = 1;

	if (command_builtin(command, buffer))
	{
		return (val);
	}
	else if (**command == '/')
	{
		execution(command[0], command);
		return (val);
	}
	return (0);
}
