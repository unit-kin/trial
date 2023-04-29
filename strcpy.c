#include "shell.h"

/**
  * _strcpy - Copied the string pointed to by src,
  * including the terminating null byte \0,
  * to the buffer pointed to by dest
  * @src: The source to copy from
  * @dest: The destination buffer to copy to
  *
  * Return: Returns a pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while ((*dest++ = *src++))
		;

	return (ret);
}
