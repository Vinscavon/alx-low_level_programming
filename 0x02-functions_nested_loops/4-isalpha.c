#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be check on
 * Return: returns 0 or 1 if c is a letter,
 * lowercase or uppercase
 */
int _isalpha(int c)
{
	return ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'));
}
