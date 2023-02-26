#include "dynamic.h"
#include <stdlib.h>

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0) ? -n : n;
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

void _puts(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;
    if (s[0] == '-') {
        sign = -1;
        i++;
    }
    while (s[i] != '\0') {
        result = result * 10 + s[i] - '0';
        i++;
    }
    return sign * result;
}

char *_strcat(char *dest, char *src) {
    int dest_len = _strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}

char *_strncat(char *dest, char *src, int n) {
    int dest_len = _strlen(dest);
    int i = 0;
    while (

