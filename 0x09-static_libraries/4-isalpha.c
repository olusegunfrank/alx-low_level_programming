#include "main.h"
/**
 * _isalpha - check for the alphabetic character
 * @c: character checked
 *
 * Return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
