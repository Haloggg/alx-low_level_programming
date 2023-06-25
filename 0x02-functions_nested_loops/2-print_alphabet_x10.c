#include <stdio.h>
#include "main.h"
#include <unistd.h>
void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 0; i < 7; i++)
	{	for (x = 'a'; x <= 'z'; x++)
		{	
			putchar(x);
		}
		putchar('\n');
	}	
}
