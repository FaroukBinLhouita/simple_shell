#include "shell.h"
/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
    while (1)
    {
        char *buffer, **arg, *path;
	int exit_code;

        buffer = NULL;
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
        if (strcmp(buffer, "exit") == 0) {
            printf("Exiting shell....\n");
            exit(EXIT_SUCCESS);
        }
        path = get_path(arg[0]);
        if (path == NULL)
	{
            perror("Farouk&&Badawii: command not found");
	    free(buffer);
	    continue;
	}

        exit_code = exe_cmd(path, arg);
	if (exit_code == -1)
		perror("Error: command execution");

        free(buffer);
    }
    return (0);
}
