#include "shell.h"

/**
 * _strncmp - Compare two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes to compare
 *
 * Return: 0 if strings are equal, otherwise difference between first
 */
int _strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;

	if (n == 0)
		return (0);

	while (
			i < n
			&& s1[i] != '\0'
			&& s2[i] != 0
			&& s1[i] == s2[i]
	)
		i++;

	return (s1[i] - s2[i]);
}
