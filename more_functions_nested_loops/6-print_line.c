#include "main.h"
/**
 * print_line - Point d'entrée du programme
 *
 * Return: Toujours 0 (Succès)
 */
void print_line(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        _putchar('_');  
    }
    _putchar('\n');     
}