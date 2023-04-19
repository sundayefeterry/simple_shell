#include "shell.h"

/**
 * find_path - locate and execute the command from the global environment
 * Return: 0
 */
char *find_path(void)
{
	int y;
	char **env = environ, *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && y < 5)
			{
				path++;
				y++;
			}
			return (path);
		}
		env++;
	}
	return (0);
}
