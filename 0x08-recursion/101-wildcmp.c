#include "main.h"

int stringlength_no_wildcard(char *str);
void non_wildcard(char **wildstring);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * stringlength_no_wildcard - Returns the length of a string,
 * ignoring wildcard characters.
 * @str: The string variable to be measured.
 *
 * Return: The length of a string.
 */
int stringlength_no_wildcard(char *str)
{
	int length = 0, indx = 0;

	if (*(str + indx))
	{
		if (*str != '*')
			length++;

		indx += 1;
		length += stringlength_no_wildcard(str + indx);
	}

	return (length);
}

/**
 * non_wildcard - Iterates through a string located at a wildcard
 * until it points to a non-wildcard character.
 * @wildstring: The string to be iterated.
 */
void non_wildcard(char **wildstring)
{
	if (**wildstring == '*')
	{
		(*wildstring)++;
		non_wildcard(wildstring);
	}
}

/**
 * postfix_match - function that checks if a string matches the postfix of
 * another string potentially containing wildcards.
 * @str: The string to be matched.
 * @postfix: The postfix varable.
 *
 * Return: If str and postfix are identical - postfix of
 * another string potentially containing wildcards.
 */
char *postfix_match(char *str, char *postfix)
{
	int string_length = stringlength_no_wildcard(str) - 1;
	int postfix_length = stringlength_no_wildcard(postfix) - 1;

	if (*postfix == '*')
		non_wildcard(&postfix);

	if (*(str + string_length - postfix_length) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	else
		return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Compares two strings and returns 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		non_wildcard(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s1 != *s2)
	{
		return (0);
	}
	if (*s2 == '\0')
	{
		return (1);
	}
	return (wildcmp(++s1, ++s2));
}