#include <stdio.h>
 /*
  * _isalpha - checks if a character is alphabetic.
  * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
  * @c: The character is to be checked.
  * File: 4-isalpha.c
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
