#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(ap, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), sep);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
			}
		n++;
	}
	printf("\n");
	va_end(ap);
}
