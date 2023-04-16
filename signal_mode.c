#include "shell.h"
/**
 * signal_mode - checks to keep track of mode
 * @mode: mode
 *
 * Return: NULL
 */

void signal_mode(int mode)
{
	int val = 1;
	int vall = 2;

	(void)mode;

	write(STDERR_FILENO, "\n", val);
	write(STDERR_FILENO, "&", vall);
}
