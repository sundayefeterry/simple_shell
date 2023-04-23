#include "main.h"
/**
 * free_buffer_function - this funstion frees the buffers
 * @buffer: free buffer
 * Return: NULL
 */
void free_buffer_function(char **buffer)
{
	int bf;

	bf = 0;

	if (!buffer || buffer == NULL)
	{

		return;

	}

	while (buffer[bf])
	{

		free(buffer[bf]);
		bf++;

	}

	free(buffer);

}
