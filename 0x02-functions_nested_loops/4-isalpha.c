 /*
  * File 4 _isalpha.c
  * Auth: Alton Andrews
  */

#include <stdio.h>
#include "main.h"

/**
 * _isaplha - check for lower case letters
 * @c: an input character
 * Description: Check character case
 * Return: Nothing.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
