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
        if (strcmp(arg[0] == "exit") == 0)
        {
            exit(0);
        }
        path = get_path(arg[0]);
        if (path == NULL)
        {
            Fprintf(2, "Farouk&&Badawii: %s: command not found", arg[0]);
            return (-1);
        }
        exe_cmd(path, arg);
    }
    return (0);
}
