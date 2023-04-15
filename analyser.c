#include "shell.h"
/**
 *analyser- checks if the function is built in.
 *@command: tokeniz the user input.
 *@buffer: user inline drived function.

 *Return: 1 if success 0 if not successful
 */
int analyser(char **command, char *buffer)
{
    if (command_builtin(command, buffer))
    {
        return (1);
    }
    else if (**command == '/')
    {
        execution(command[0], command);
        return (1);
    }
    return (0);
}
