#include <stdio.h>

/**
 * main -display zero thru nine.
 *
 * Return: 0
 */
int main(void){
	for (int i = 0; i <= 9; i++) {
		putchar(i + '0');
		putchar('\n');
	}
	return (0);
}
