#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 hash function
 * @str: string to hash
 *
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	/* Iterate over each character in the string */
	while ((c = *str++))
	{
		/* Multiply the current hash value by 33 and add the current character */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
