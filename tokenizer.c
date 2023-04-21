#include "shell.h"
/**
 * tokenizer - this creates a token from the given user input.
 * @line_tkn: line to be tokenized.
 * Return: an []array of strings.
 */
char **tokenizer(char *line_tkn)
{
	char *delimiter = " :\t\r\n";
	char *token_gen = NULL;
	char **tokens = NULL;
	char *buffer = NULL;
	char *ptr_buffer = NULL;
	int ass_token_size = 1;
	size_t x_index = 0;
	size_t flg = 0;

	buffer = _duplicatestring(line_tkn);

	if (buffer == NULL || buffer == 0)
		return (NULL);
	ptr_buffer = buffer;

	while (*ptr_buffer)
	{
		if (flg == 0 && _stringcharacter(delimiter, *ptr_buffer) != NULL)
			ass_token_size++;
			flg = 1;
		if (flg == 1 && _stringcharacter(delimiter, *ptr_buffer) == NULL)
			flg = 0;
		ptr_buffer++;
	}
	tokens = malloc(sizeof(char *) * (ass_token_size + 1));
	token_gen = strtok(buffer, delimiter);
	while (token_gen)
	{
		tokens[x_index] = _duplicatestring(token_gen);
		if (tokens[x_index] == NULL || tokens[x_index] == 0)
			free(tokens);
			return (NULL);
		token_gen = strtok(NULL, delimiter);
		x_index++;
	}
	tokens[x_index] = '\0';

	free(buffer);

	return (tokens);
}
