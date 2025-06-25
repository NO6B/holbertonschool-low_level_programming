#include "main.h"
/**
 * _puts - Affiche une chaîne
 * @str: Chaîne à afficher
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}