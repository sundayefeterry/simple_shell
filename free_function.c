#include "shell.h"
/**
 * free_buffers - frees the buffers
 * @buf: buffer freed
 *
 * Return: 0
 */
void free_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == 0)
	{
		return;
	}

	while (buf[i])
	{
		free(&buf[i]);
		i++;
	}

	free(buf);

}
