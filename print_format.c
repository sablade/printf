#include "main.h"
/**
 * print_char - Prints Character
 * @list: List of arguments passed with function
 * Return: Returns the number of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints A String
 * @list: List of arguments passed with function
 * Return: Returns the number of characters printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: List of arguments passed with the function
 * Return: Returns the number of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @list: List of arguments passed with the function
 * Return: Returns the number of characters printed
 */
int print_integer(va_list list)
{
	int num_len;

	num_len = print_number(list);
	return (num_len);
}

/**
 * unsigned_integer - Prints Unsigned Integers
 * @list: List of arguments passed with the function
 * Return: Returns a count of printed numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (print_unsigned_number(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}
