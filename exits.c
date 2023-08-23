#include "shell.h"

/**
 * _strncpy - Copies a string up to a specified limit.
 * @dest: The destination string to copy to.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to be copied.
 *
 * Return: Returns the destination string after copying.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * _strncat - Concatenates two strings up to a specified limit.
 * @dest: The first string to be concatenated.
 * @src: The second string to be concatenated.
 * @n: The maximum number of bytes to be used.
 *
 * Return: Returns the first string after concatenation.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * _strchr - Locates a character in a given string.
 * @s: The string to be searched.
 * @c: The character to look for.
 *
 * Return: Returns a ptr to the first occurrence of char in string.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
