#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: String to reverse
 * Return: Returns a pointer to character
 */
char *rev_string(char *s)
{
	int len, head;
	char tmp, *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - Sends characters to be written to standard output
 * @str: String to parse
 * Return: Returns void
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * base_len - Calculates the length of an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated on
 * Return: Returns (int) the length of the number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * _memcpy - Copies a memory area from a source to destination
 * @dest: Destination of copy operation
 * @src: Source of the copy operation
 * @n: Number of bytes to copy
 * Return: Returns a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
