#include "shell.h"

/**
 * validate_path - validates mypath.
 * @mypath: tokener
 * @command: user command
 *
 * Return: mypath || failure: NULL
 */

char *validate_path(char **mypath, char *command)
{
	int p = 0;

	char *print;

	while (mypath[p])
	{
		print = append_path(mypath[p], command);
		if (access(print, F_OK | X_OK) == 0)
		{
			return (print);
		}
		free(print);

		p++;
	}

	return (NULL);
}
