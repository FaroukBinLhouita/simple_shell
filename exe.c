#include "shell.h"

/**
 * exe_cmd - execute the command
 * @patth: the whole path
 * @argv: the argument
 *
 * Return: void
 */
void exe_cmd(char *patth, char **argv)
{
    pit_t child;

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
        wait(NULL);
    }
}
