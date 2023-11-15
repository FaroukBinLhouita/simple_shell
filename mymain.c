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
        printf("Command: %s\n", arg[0]);
	if (strcmp(arg[0], "exit") == 0) {
            printf("Exiting shell....\n");
	    free(buffer);
            exit(EXIT_SUCCESS);
        }
        path = get_path(arg[0]);
        if (path == NULL)
	{
            perror("Farouk&&Badawii: command not found");
	    free(buffer);
	    continue;
	}

	printf("Executing: %s\n", path);
        exit_code = exe_cmd(path, arg);
	if (exit_code == -1)
		perror("Error: command execution");
	else
		printf("Command exited with status: %d\n", exit_code);

        free(buffer);
    }
    return (0);
}
