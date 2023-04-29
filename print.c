#include "shell.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * print_strings - Print strings followed by a new line
  *
  * @seperator: Delimiter
  * @n: Number of variadic parameters (strings to print)
  */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;

	va_start(args, n);
	for (; i < n; i++)
	{
		str = va_arg(args, char *);
		_puts(str ? str : "(nil)");

		if (i != n - 1 && seperator != NULL)
			_puts((char *)seperator);
	}
	va_end(args);
	_putchar('\n');
}

/**
  * _putchar - Writes a character to stdout
  * @c: Character to write
  *
  * Return: 1 on success, -1 on error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * _puts - Prints a string to stdout
  * @str: String to print out
  */
void _puts(char *str)
{
	char *p = str;

	while (*p)
	{
		_putchar(*p);
		p++;
	}
}
