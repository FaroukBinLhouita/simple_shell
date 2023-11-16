#include "shell.h"
/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
<<<<<<< HEAD
	char *buffer, **arg, *path;
=======
        char *buffer, **arg, *path, *env;
        extern char **environ;
        int i = 0;
>>>>>>> 2d8653899b0d6069707441ffbc361ce74ee3de3c
    while (1)
    {
        print_prompt();
        buffer = _getline(buffer);

        if (buffer[0] == '\n')
            continue;

        arg = _strtok(buffer);
<<<<<<< HEAD
	if (strcmp(arg[0], "exit") == 0)
	{
=======
        if (strcmp(arg[0], "exit") == 0)
        {
>>>>>>> 2d8653899b0d6069707441ffbc361ce74ee3de3c
            printf("Exiting shell....\n");
            free(buffer);
            exit(EXIT_SUCCESS);
        }
<<<<<<< HEAD
	if (strcmp(arg[0], "env") == 0)
	{
		exe_env(arg[0]);
		continue;
	}
=======
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
>>>>>>> 2d8653899b0d6069707441ffbc361ce74ee3de3c
        path = get_path(arg[0]);
        if (path == NULL)
        {
            perror("Farouk&&Badawii: command not found");
<<<<<<< HEAD
	    freeup(buffer, path, arg);
	    continue;
	}
        exe_cmd(path, arg);
        freeup(buffer, path, arg);
=======
            free(buffer);
            continue;
        }
        exe_cmd(path, arg);
        free(buffer);
>>>>>>> 2d8653899b0d6069707441ffbc361ce74ee3de3c
    }
    return (0);
}
