#include <stdlib.h>
#include "main.h"
/**
 * argstostr - is the function to concatenate arg
 * @ac: is the argument count
 * @av: is the array of arguement
 * Return: as specified
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	len++;
	len++;
	}

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++, k++)
	new_str[k] = av[i][j];
	new_str[k++] = '\n';
	}
	new_str[k] = '\0';

	return (new_str);
}

