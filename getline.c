#include "shell.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

ssize_t _errno(char *buf);
ssize_t free_buf(ssize_t ret, char *buf);

/**
 * _getline - Reads input from stdin
 *
 * @lineptr: An address of the buffer to store input
 * @n: A pointer to the number of bytes to read
 * @fd: File descriptor to read from
 *
 * Return: Returns number of characters read, including /n (Success)
 * or -1 (Error)
 * or -2 (Terminated by a signal)
 */
ssize_t _getline(char **lineptr, size_t *n, int fd)
{
	ssize_t n_read = 0;
	ssize_t ret = 0;
	char *p, *end, *new_ptr, *buf = malloc(BUFSIZ);

	if (buf == NULL)
		return (-1);
	if (*lineptr == NULL)
	{
		*n = BUFSIZ;
		*lineptr = malloc(*n);
		if (*lineptr == NULL)
			return (free_buf(-1, buf));
	}
	while ((n_read = read(fd, buf, BUFSIZ)) > 0)
	{
		p = buf;
		end = buf + n_read;
		while (p < end)
		{
			if ((size_t)ret >= *n)
			{
				*n *= 2;
				new_ptr = realloc(*lineptr, *n);
				if (new_ptr == NULL)
					return (free_buf(-1, buf));
				*lineptr = new_ptr;
			}
			(*lineptr)[ret++] = *p++;
			if ((*lineptr)[ret - 1] == '\n')
				return (free_buf(ret, buf));
		}
	}
	if (n_read == -1)
		return (_errno(buf));

	return (free_buf(ret, buf));
}

/**
 * _errno - Prints error message
 *
 * @buf: Buffer to free
 *
 * Return: Returns -1 (Error)
*/
ssize_t _errno(char *buf)
{
	if (errno == EINTR)
	{
		return (free_buf(-2, buf));
	}
	else
	{
		return (free_buf(-1, buf));
	}
}

/**
 * free_buf - Frees the buffer
 *
 * @ret: Return value
 * @buf: Buffer to free
 *
 * Return: Returns ret
 */
ssize_t free_buf(ssize_t ret, char *buf)
{
	free(buf);
	return (ret);
}
