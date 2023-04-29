#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @str: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *str)
{
	int res = 0;
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (res);
}
