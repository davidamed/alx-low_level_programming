#include "main.h"

/**
 * print_alphabet - Prints all alphabet in lowercase
 */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);

	_putchar('\n');
}
