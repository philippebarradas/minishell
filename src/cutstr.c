

#include "../include/minish.h"

int strj(int e, int j , char *str)
{
    if (e == 1 && str[j - 1] != ';')
        return (' ');
    return (str[j]);
}

int elj(int e, int j , char *str)
{
    if (e == 1 && str[j - 1] != ';')
        j++;
    return (j);
}

int ele(int e, char str)
{
    if (e == 1 && str != ';')
        return (0);
    return (e);
}

char *cut_str(char *str)
{
    int i = 0, j = 0, e = 0;

    while (str[i] != '\n')
    {
        if (str[i] != ' ' && str[i] != '\t')
        {
            str[j] = str[i];
            i++;
            j++;
            e = 1;
        }
        if (str[i] == ' ' || str[i] == '\t')
        {
            i++;
            str[j] = strj(e, j, str);
            j = elj(e, j, str);
            e = ele(e, str[j - 1]);
        }
    }
    str[j] = '\0';
    return (str);
}