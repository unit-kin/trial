#include "shell.h"

/**
  * _isdigit - Checks for a digit
  * @c: Digit to check for
  *
  * Return:
  * Returns 1 (True)
  * Returns 0 (False)
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
