#include "main.h"

char *cap_string(char *str)
{
    char sp[] = ",;.!?\" (){}";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; sp[j] != '\0'; j++)
        {
            if (str[i] == sp[j])
            {
                if (str[i + 1] == 'a')
                    str[i + 1] = 'A';
                else if (str[i + 1] == 'b')
                    str[i + 1] = 'B';
                else if (str[i + 1] == 'c')
                    str[i + 1] = 'C';
                else if (str[i + 1] == 'd')
                    str[i + 1] = 'D';
                else if (str[i + 1] == 'e')
                    str[i + 1] = 'E';
                else if (str[i + 1] == 'f')
                    str[i + 1] = 'F';
                else if (str[i + 1] == 'g')
                    str[i + 1] = 'G';
                else if (str[i + 1] == 'h')
                    str[i + 1] = 'H';
                else if (str[i + 1] == 'i')
                    str[i + 1] = 'I';
                else if (str[i + 1] == 'j')
                    str[i + 1] = 'J';
                else if (str[i + 1] == 'k')
                    str[i + 1] = 'K';
                else if (str[i + 1] == 'l')
                    str[i + 1] = 'L';
                else if (str[i + 1] == 'm')
                    str[i + 1] = 'M';
                else if (str[i + 1] == 'n')
                    str[i + 1] = 'N';
                else if (str[i + 1] == 'o')
                    str[i + 1] = 'O';
                else if (str[i + 1] == 'p')
                    str[i + 1] = 'P';
                else if (str[i + 1] == 'q')
                    str[i + 1] = 'Q';
                else if (str[i + 1] == 'r')
                    str[i + 1] = 'R';
                else if (str[i + 1] == 's')
                    str[i + 1] = 'S';
                else if (str[i + 1] == 't')
                    str[i + 1] = 'T';
                else if (str[i + 1] == 'u')
                    str[i + 1] = 'U';
                else if (str[i + 1] == 'v')
                    str[i + 1] = 'V';
                else if (str[i + 1] == 'w')
                    str[i + 1] = 'W';
                else if (str[i + 1] == 'x')
                    str[i + 1] = 'X';
                else if (str[i + 1] == 'y')
                    str[i + 1] = 'Y';
                else if (str[i + 1] == 'z')
                    str[i + 1] = 'Z';
            }
        }
    }

    return (str);
}
