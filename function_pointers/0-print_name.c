#include <stdio.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: is a pointer to the function you need to use
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
