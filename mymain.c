#include "shell.h"
/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
        char *buffer, **arg, *path, *env;
        extern char **environ;
        int i = 0;
    while (1)
    {
        print_prompt();
        buffer = _getline(buffer);

        if (buffer[0] == '\n')
            continue;

        arg = _strtok(buffer);
        if (strcmp(arg[0], "exit") == 0)
        {
            printf("Exiting shell....\n");
            free(buffer);
            exit(EXIT_SUCCESS);
        }
        if (strcmp(arg[0], "env") == 0)
        {
                while(environ[i])
                {
                        env = environ[i];
                        printf("%s\n", env);
                        i++;
                }
                continue;
        }
        path = get_path(arg[0]);
        if (path == NULL)
        {
            perror("Farouk&&Badawii: command not found");
            free(buffer);
            continue;
        }
        exe_cmd(path, arg);
        free(buffer);
    }
    return (0);
}
