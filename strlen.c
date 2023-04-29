#include "shell.h"
#include <stdio.h>
/**
  * _strlen - Returns the length of a string
  * @s: The string to compute
  *
  * Return: Returns the length of the string
  */
int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;
	return ((int)(p - s));
}
