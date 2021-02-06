

#include "../include/minish.h"

int ol_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}

int ft_strcmpp(char *s1, char *s2)
{
    int i = 0, j = 0;

    while (s2[j] && s1[j] != ';')
    {
        if (s1[j] > s2[j])
            return (1);
        else if (s1[j] < s2[j])
            return (-1);
        j++;
    }
    if (s1[j] == ' ' || s1[j] == '\t' || s1[j] == '\0' || s1[j] == ';')
        return (0);
    return (1);
}

int ft_strcmp(char *s1, char *s2)
{
    int i = 0, j = 0;

    while (s2[j])
    {
        if (s1[j] > s2[j])
            return (1);
        else if (s1[j] < s2[j])
            return (-1);
        j++;
    }
    if (s1[j] == '=')
        return (0);
    return (1);
}