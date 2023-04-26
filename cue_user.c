#include "main.h"

/**
 * cue_user - this cue is to ask the user for input.
 *
 * Return: NULL
 */

void cue_user(void)
{
	int val = 1;
	int vall = 2;

	char prompt[] = "$ ";

	if ((isatty(STDIN_FILENO) == val) && (isatty(STDOUT_FILENO) == val))
	{
		flags.interactive = val;
	}
	if (flags.interactive)
	{
		write(STDERR_FILENO, prompt, vall);
	}
}
