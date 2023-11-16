#include "shell.h"

/**
 * _strcpy - make a copy
 * @tmp: char pointer
 * @src: char pointer
 * Return: oringinal_dest
 */
char *_strcpy(char *tmp, char *src)
{
<<<<<<< HEAD
	char *new_dest = tmp;
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';

	return (new_dest);
=======
char *new_dest = tmp;
while (*src != '\0')
{
*tmp = *src;
tmp++;
src++;
}
*tmp = '\0';
return (new_dest);
>>>>>>> 7da9d2b06222aa0c5c4f8ec33fe728db1a24603e
}

/**
* _strcat - make a copy
* @tmp: char pointer
* @src: char pointer
* Return: string
*/
char *_strcat(char *tmp, char *src)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> 7da9d2b06222aa0c5c4f8ec33fe728db1a24603e
}
