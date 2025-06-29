#include "main.h"
/**
 * *string_toupper - transforme lowercase letters of a string to uppercase.
 * @str: Pointeur vers la chaîne de caractères
 * Return: str
 */
char *string_toupper(char *str)
{
char min[] = "abcdefghijklmnopqrstuvwxyz";
int i;
int j;
char maj[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; maj[j] != '\0'; j++)
{
if (str[i] == min[j])
{
str[i] = maj[j];
}
else if (str[i] == maj[j])
{
str[i] = maj[j];
}
}
}
return (str);
}
