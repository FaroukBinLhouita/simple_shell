#include "shell.h"

/**
 * _ourstrtok - the strtok function
 * @str: the string
 * @deli: the delimter
 *
 * Return: string
 */
char *_ourstrtok(const char *str, char deli)
{
    int count = strlen(str), i, j = 0;
    char new[count + 1];

    for (i = 0; i <= count; i++)
    {
        if (str[i] == deli || str[i] == '\0')
        {
            new[j] = '\0';
            j = 0;
        }
        else
        {
            new[j] = str[i];
            j++;
        }
    }
    return (new);
}

