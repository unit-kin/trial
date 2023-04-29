#include "shell.h"
#include <stdlib.h>
#include <string.h>

/**
  * split_line - Splits a string of words seperated with space
  *
  * @str: String of words to split
  *
  * Return: Returns an array of null-terminated strings
  */
char **split_line(char *str)
{
	char **arr, *token, *s;
	int len, i;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = i = 0;
	if (str != NULL || *str != '\0')
		len++;
	s = str;
	while (*s)
	{
		if (*s == ' ' && *(s + 1) != ' ')
			len++;
		s++;
	}
	len++;
	arr = malloc((sizeof(char *) * len));
	if (arr == NULL)
		return (NULL);
	token = strtok(str, " ");
	while (token != NULL)
	{
		arr[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	arr[i] = NULL;

	return (arr);
}
