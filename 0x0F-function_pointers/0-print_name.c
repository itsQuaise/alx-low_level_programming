#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - a function that prints name
 * @name: name of the person
 * Return: Nothing
 * @f: funtion
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
