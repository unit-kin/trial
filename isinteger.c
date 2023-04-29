#include "shell.h"

/**
  * isinteger - Checks if a string can be converted to an integer
  *
  * @s: String to check
  *
  * Return: Returns 1 (True), or 0 (Fail)
  */
int isinteger(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!_isdigit(s[i]))
			return (0);
	}
	return (1);
}
