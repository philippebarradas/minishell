#include "../include/minish.h"

int ft_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int ft_strlenvir(char const *str)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != ';')
        i++;
    return (i);
}