#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character
 * Return: 1 if letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
