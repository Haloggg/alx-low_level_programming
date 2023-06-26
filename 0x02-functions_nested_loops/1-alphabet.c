#include <stdio.h>
#include "main.h"
#include <unistd.h>
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar('%c', x);
	_putchar('\n');
}
