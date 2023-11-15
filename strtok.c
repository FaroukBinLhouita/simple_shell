#include "shell.h"

/**
 * _strtok - split the user input
 * @line_buffer: the user input
 *
 */
char **_strtok(char *line_buffer)
{
    char *cpy, *token, *delim, **str_token;
    int num_token, i, j;

    cpy = NULL;
    delim = " \n\t";
    num_token = 0;
    cpy = _strdup(cpy, line_buffer);
    token = strtok(cpy, delim);
    while (token)
    {
        num_token++;
        token = strtok(NULL, delim);
    }
    str_token = malloc(sizeof(char *) * num_token);
    if (str_token == NULL)
    {
        perror("tsh: memory allocation error");
        return (NULL);
    }
    token = strtok(line_buffer, delim);
    for (i = 0; token != NULL; i++)
    {
        str_token[i] = malloc(sizeof(char) * _strlen(token + 1));
        if (str_token[i] == NULL)
        {
                perror("tsh: memory allocation error");
                 for (j = 0; j < i; j++)
                {
                        free(str_token[j]);
                }
                free (str_token);
                return (NULL);
        }
        _strcpy(str_token[i], token);
        token = strtok(NULL, delim);
    }
    str_token[i] = NULL;
    free(cpy);

    return (str_token);
}
