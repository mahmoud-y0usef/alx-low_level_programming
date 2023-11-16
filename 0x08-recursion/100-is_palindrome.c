#include "main.h"

/**
 * find_string_length - function returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_string_length(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length += 1;
		length = length + find_string_length(s + length);
	}

	return (length);
}

/**
 * check_palindrome - function thagt checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: a palindrome.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}
	else if (s[index] == s[len - index - 1])
	{
		return (check_palindrome(s, len, index + 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - function that checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: a palindrome.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_string_length(s);

	if (!(*s))
	{
		return (1);
	}
	else
		return (check_palindrome(s, len, index));
}