#include "main.h"
/**
 * parser - Receives the main string with all required parameters
 * to print the formatted string
 * @format: string of all desired characters
 * @f_list: list of all possile associated functions
 * @arg_list: list of all arguments passed to the program
 * Return: Count of characters printed
 */
int parser(const char *format, convert_t f_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			printed_chars++;
		}
	}
	return (printed_chars);
}