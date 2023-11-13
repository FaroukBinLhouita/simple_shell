#include "shell.h"

/**
 * _strtok - split the user input
 *
 * @line_buffer: the user input
 *
 */
char **_strtok(char *line_buffer)
{
    char *cpy, *token, *delim, **str_token;
    int num_token, i;

    delim = " \n\t";
    num_token = 0;
    cpy = _strdup(cpy, line_buffer);
    token = strtok(cpy, delim);
    while (token)
    {
        num_token++;
        token = (NULL, delim);
    }

    str_token = malloc(sizeof(char *) * num_token);
    if (str_token == NULL)
    {
        perror("tsh: memory allocation error");
        return (-1)
    }

    token = strtok(line_buffer, delim);
    for (i = 0; token != NULL; i++)
    {
        str_token[i] = malloc(sizeof(char) * _strlen(token));
        str_token[i] = token;
        token = (NULL, delim);
    }
    str_token[i] = '\0';
    return (str_token);
}
