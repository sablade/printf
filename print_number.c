#include "main.h"
/**
 * print_number - Prints a number sent to the function
 * @args: List of arguments pass to the function
 * Return: Returns the number of arguments passed to the function
 */
int print_number(va_list args)
{
	int n, div, len;
	unsigned int num;

	n = va_arg(args, int);/*get next argument in the argslist*/
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
/**
 * print_unsigned_number - Prints an unsigned number
 * @n: Unsigned int to be printed
 * Return: The amount of numbers of printed
 */
int print_unsigned_number(unsigned int n)
{
	int div, len;
	unsigned int num;

	div = 1;
	len = 0;
	num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
