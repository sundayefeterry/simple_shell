#include "shell.h"
/**
 * free_buffers - frees the buffers
 * @buf: buffer freed
 *
 * Return: 0
 */
void free_buffers(char **buf)
{
	int bf;
	bf = 0;

	if (!buf || buf == 0)
	{
		return;
	}

	while (buf[bf])
	{
		free(&buf[bf]);
		bf++;
	}

	free(buf);

}
