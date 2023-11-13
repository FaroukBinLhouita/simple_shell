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
        _getline(buffer);
        arg = _strtok(buffer);
        if (arg[0] == "exit" || arg[0] == EOF)
        {
            exit(0);
        }
        path = get_path(arg[0]);
        if (path == NULL)
        {
            Fprintf("Farouk&&Badawii: %s: command not found", arg[0]);
            return (-1);
        }
        exe_cmd(path, arg);
    }
    return (0);
}
