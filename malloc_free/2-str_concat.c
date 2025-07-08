#include "main.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
char tab;


while (s2[j] != '\0')
{
j++;
}
while (s1[i] != '\0')
{
s2[j] = s1[i];
j++;
i++;
}
tab = malloc((s2 + 1) * sizeof(char)); 
}