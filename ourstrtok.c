#include "shell.h"
#include <stdlib.h>
#include <string.h>

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
        char *new = malloc((count + 1) * sizeof(char)); // Allocate memory for new array

        if (new == NULL) {
            return NULL; // Memory allocation failed
        }

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
