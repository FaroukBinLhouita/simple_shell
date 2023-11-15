#include "shell.h"

/**
 * main - simple shell program
 *
 * Return: always 0
 */
int main(void)
{
    char *buffer, **arg, *path;

    buffer = NULL;
    while (1)
    {
        print_prompt();
        buffer = _getline(buffer);
        arg = _strtok(buffer);
        if (strcmp(arg[0], "exit") == 0)
        {
            exit(EXIT_SUCCESS);
        }
        path = get_path(arg[0]);
        if (path == NULL)
            perror("Farouk&&Badawii: command not found");

        exe_cmd(path, arg);
        free(buffer);
    }
    return (0);
}
