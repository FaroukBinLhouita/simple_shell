#include "shell.h"

/**
 * _strdup - make a copy
 * @tmp: char pointer
 * @src: char pointer
 * Return: oringinal_dest
 */
char *_strdup(char *src)
{
<<<<<<< HEAD
	size_t len;
	char *dest;
=======
        size_t len;
        char *dest;
>>>>>>> 2d8653899b0d6069707441ffbc361ce74ee3de3c

        len = _strlen(src);
        dest = malloc(len + 1);

        if (dest == NULL)
        {
                perror("Error: strdub memmory allocation failed");
                return (NULL);
        }
        while (*src != '\0')
        {
                *dest = *src;
                src++;
                dest++;
        }
        *dest = '\0';

        return (dest);
}
