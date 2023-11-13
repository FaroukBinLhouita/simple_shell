#include "shell.h"

/**
 * main - simple shell program
 *
 *
 */
int main(void)
{
    char *buffer, **arg;
    
    buffer = NULL;
    while (1)
    {
        print_prompt();
        _getline(buffer);
        arg = _strtok(buffer);
        if (arg[0] == "exit" || arg[0] == ////////////////"EOF")
        {
            exit(0);
        }
        
        execute_command();
    }
}
