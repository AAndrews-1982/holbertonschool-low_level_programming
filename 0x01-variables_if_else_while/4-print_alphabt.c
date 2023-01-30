#include <stdio.h>

/**
 * main - display alphabet minus q and e
 *
 */
int main(void)
{
	int character;

	character = 'a';
	while (character <= 'z')
	{
		if (character != 'q' && character != 'e')
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
