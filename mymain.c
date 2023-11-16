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
		exe_env(arg[0]);
		continue;
	}
        path = get_path(arg[0]);
        if (path == NULL)
	{
            perror("Farouk&&Badawii: command not found");
	    freeup(buffer, path, arg);
	    continue;
	}
        exe_cmd(path, arg);
        freeup(buffer, path, arg);
    }
    return (0);
}
