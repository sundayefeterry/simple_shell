#include "main.h"

/**
 * find_path - locate and execute the command from the global env.
 *
 * Return: 0
 */

char *find_path(void)
{
	int src;
	int val = 5;

	char **env = environ;

	char *path = NULL;

	while (*env)
	{
		if (_compstring(*env, "PATH=", val) == 0)
		{
			path = *env;
			while (*path && src < val)
			{
				path++;
				src++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
