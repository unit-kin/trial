#include "shell.h"
#include <stdlib.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The return string to append to
  * @src: String to join
  *
  * Return: Returns a pointer to the destination string dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* find the end of dest string */
	while (dest[i] != '\0')
	{
		i++;
	}
	/* append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/* add terminating null byte to dest */
	dest[i] = '\0';
	/* return pointer to dest string */
	return (dest);
}
