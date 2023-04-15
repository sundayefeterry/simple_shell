#include "shell.h"

/**
 * cue_user - this cue is to ask the user for input "&"
 * Return: NULL
 */

void cue_user(void)
{
	int val = 1;

	if (isatty(STDIN_FILENO) == val && isatty(STDOUT_FILENO) == val)
	{
		flags.interactive = val;
	}
	if (flags.interactive)
	{
		const char prompt[] = "&";

		write(STDERR_FILENO, prompt, sizeof(prompt) - val);
	}
}
