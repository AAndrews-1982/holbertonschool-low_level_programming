/*
 * File: 5-sqrt_recursion.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return n;

    return _sqrt_helper(n, 1, n);
}

/**
 * _sqrt_helper - Helper function to find the square root of a number.
 *
 * @n: The number to find the square root of.
 * @start: The start of the search range.
 * @end: The end of the search range.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_helper(int n, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * mid == n)
            return mid;

        if (mid * mid > n)
            return _sqrt_helper(n, start, mid - 1);

        return _sqrt_helper(n, mid + 1, end);
    }

    return end;
}

