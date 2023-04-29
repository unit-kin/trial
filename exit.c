#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * exit_shell - Exists the shell
  *
  * @arr: Contains the commands
  * @prog: Shell name
  * @buffer: Buffer containing user input
  *
  * Return: Always 1 (Success)
  */
int exit_shell(char **arr, char *prog, char *buffer)
{
	int i;

	if (arr[1] == NULL)
	{
		free(buffer);
		free(arr);
		exit(0);
	}
	else if (isinteger(arr[1]) == 1)
	{
		i = _atoi(arr[1]);
		free(buffer);
		free(arr);
		exit(i);
	}
	else
	{
		print_strings(
				NULL,
				5,
				prog,
				": 1: ",
				arr[0],
				": Illegal number: ",
				arr[1]
		);
		free(arr);

		return (1);
	}
}
