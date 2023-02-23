#include "main.h"

/**
 * _isdigit  - checks for digits
 *
 * @c: digits to be checked
 *
 * Return: retrn 1 otherwise return 0
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

