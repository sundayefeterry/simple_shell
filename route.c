#include "main.h"

/**
 * find_path - locate and execute the command from the global environment.
 *
 * Return: 0
 */

char *find_path(void)
{
	int src;
	int val = 5;

	char **environment = environ;

	char *path = NULL;

	while (*environment)
	{
		if (_compstring(*environment, "PATH=", val) == 0)
		{
			path = *environment;
			while (*path && src < val)
			{
				path++;
				src++;
			}
			return (path);
		}
		environment++;
	}
	return (NULL);
}
