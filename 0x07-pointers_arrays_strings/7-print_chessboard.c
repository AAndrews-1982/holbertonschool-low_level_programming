/*
 * File 7-print_chessboard.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * @*print_chessboard - print a chessboard
 * @a: string
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0 ; row < 8; row++)
	{
		for (col = 0 ; col < 8 ; col++)
		{	
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
