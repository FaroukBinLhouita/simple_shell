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
        perror("Erorr");
        return (-1);
    }
    
    if (child == 0)
    {
        execve(patth, argv, NULL);
    }
    else
    {
        wait(status);
	if (WIFEXITED(STATUS))

    }
    else
    {
	    wait(&status);
	    if (WIFEXITED(status))
	    {
		    exit_code = WEXITSTATUS(status);
	    }
	    else if (WIFSIGNALED(status))
		    exit_code = WTERMSIG(status);
	    else (WIFSTOPPED(STATUS))
		    exit_code = WSTOPSIG(status);
    } 

    return (1);
}
