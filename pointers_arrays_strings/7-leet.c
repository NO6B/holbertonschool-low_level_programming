#include "main.h"
/**
 * *leet - transforme string into digit
 * @str: Pointeur vers la chaîne de caractères
 * Return: Longueur de la chaîne
 */
char *leet(char *str)
{   
    int i;
    int j;
    char lettre [] = "aAeEoOtTlL";
    char chiffre[] = "4433007711";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; lettre[j] != '\0'; j++)
    {
        if (str[i] == lettre[j])
        {
            str[i] = chiffre[j];
        }  
    }
    }
    return(str);

}