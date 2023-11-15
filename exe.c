#include "shell.h"

/**
 * exe_cmd - execute the command
 * @patth: the whole path
 * @argv: the argument
 *
 * Return: void
 */
int exe_cmd(char *patth, char **argv)
{
    pid_t child;
    int status, exit_code;

    child = fork();
    if (child == -1)
    {
        perror("Erorr: forking");
        return (-1);
    }
    
    if (child == 0)
    {
	printf("Executing command: %s\n", patth);
        if (execve(patth, argv, NULL) == -1)
	{
		perror("Error: exeve() error");
		exit (EXIT_FAILURE);
	}
    }
    else
    {
        wait(&status);
        if (WIFEXITED(status))
        {
            exit_code = WEXITSTATUS(status);
        }
        else if (WIFSIGNALED(status))
        {
            exit_code = WTERMSIG(status);
        }
        else if (WIFSTOPPED(status))
        {
            exit_code = WSTOPSIG(status);
        }
    } 

    return (exit_code);
}
