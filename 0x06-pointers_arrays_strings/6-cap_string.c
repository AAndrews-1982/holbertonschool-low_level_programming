/**
 * File: 6-cap_string.c
 * Auth: Alton Andrews
 */
int check_seperators(char c);

/**
 * cap_string - function that capitalizes all words of a string
 * @c: pointer to string
 *
 * Separators of words: Space, tabulation, new line, ,, ;, ., !, ?, ",(, ), {, and }
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

/**
 * check_seperators - Seperators: space, tabs, new line
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: input character
 * Return: 1 if character is a separator, 0 otherwise
 */
int check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };
	for (i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
