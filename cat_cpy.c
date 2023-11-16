#include "shell.h"

/**
 * _strcpy - make a copy
 * @tmp: char pointer
 * @src: char pointer
 * Return: oringinal_dest
 */
char *_strcpy(char *tmp, char *src)
{
	char *new_dest = tmp;
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';

	return (new_dest);
}

/**
 * _strcat - make a copy
 * @tmp: char pointer
 * @src: char pointer
 * Return: string
 */
char *_strcat(char *tmp, char *src)
{
	char *result;

	result = tmp;

	while (*tmp != '\0')
		tmp++;
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
    
	return (result);
}
