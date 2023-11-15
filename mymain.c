#include "shell.h"
/**
 * main - main function
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
        if (buffer == NULL)
        {
            printf("\n");
            break;
        }
        if (buffer[0] == '\n')
            continue;
        arg = _strtok(buffer);
        buffer[_strlen(buffer) - 1] = '\0';
        if (strcmp(buffer, "exit") == 0) {
            printf("Exiting shell....\n");
            exit(0);
        }
        path = get_path(arg[0]);
        if (path == NULL)
            perror("Farouk&&Badawii: command not found");

        exe_cmd(path, arg);
        free(buffer);
    }
    return (0);
}
