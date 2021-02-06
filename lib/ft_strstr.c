#include "../include/minish.h"

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        while (str[i++] == to_find[j++])
        if (ft_strlen(to_find) == j)
            return (to_find);
        i = i-j;
        j = 0;
        i++;
    }
    return (str);
}