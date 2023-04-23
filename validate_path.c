#include "main.h"

/**
 * validate_path - validates np.
 * @np: tokenizer
 * @command: user command
 *
 * Return: np || failure: NULL
 */

char *validate_path(char **np, char *command)
{
	int p = 0;

	char *print;

	while (np[p])
	{
		print = create_new_path(np[p], command);
		if (access(print, F_OK | X_OK) == 0)
		{
			return (print);
		}
		free(print);
		p++;
	}

	return (NULL);
}
