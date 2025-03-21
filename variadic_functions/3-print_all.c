#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print
 * @format: type
 * Return: "printf"
 */

void print_all(const char * const format, ...)
{
va_list args;
form form_types[] = {
{ "c", print_char },
{ "i", print_integer },
{ "f", print_float },
{ "s", print_char_ptr }
};
unsigned int i = 0;
unsigned int j = 0;
char *separator = "";

va_start(args, format);

while (format != NULL && format[i])
{
	j = 0;
	while (j < 4)
	{
		if (format[i] == *form_types[j].identifier)
		{
			form_types[j].f(separator, args);
			separator = ", ";
		}
		j++;
	}
i++;
}
va_end(args);
printf("\n");

}


/**
  * print_char - char type
  * @separator: separator
  * @args: A list of variadic arguments
  * Return: Nothing
  */
void print_char(char *separator, va_list args)
{
printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_integer - int type
  * @separator:  separator
  * @args: A list of variadic arguments
  * Return: Nothing
  */
void print_integer(char *separator, va_list args)
{
printf("%s%i", separator, va_arg(args, int));
}

/**
   * print_float - float type
   * @separator: separator
   * @args: A list of variadic arguments
   * Return: Nothing
   */
void print_float(char *separator, va_list args)
{
printf("%s%f", separator, va_arg(args, double));
}

/**
   * print_char_ptr - string
   * @separator: separator
   * @args: A list of variadic arguments
   *
   * Return: Nothing
   */
void print_char_ptr(char *separator, va_list args)
{
char *arg = va_arg(args, char *);

if (arg == NULL)
{
printf("%s%s", separator, "(nil)");
return;
}
printf("%s%s", separator, arg);
}
