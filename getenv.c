#include "shell.h"
#include <stdlib.h>

/**
 * _getenv - Get the value of an environment variable
 *
 * @name: Name of the environment variable
 *
 * Return: Value of the environment variable
 * or NULL if the variable is not found
*/
char *_getenv(const char *name)
{
	size_t namelen = _strlen((char *)name);
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp((char *)name, *env, namelen) == 0
		&& (*env)[namelen] == '=')
			return (&(*env)[namelen + 1]);
	}
	return (NULL);
}
