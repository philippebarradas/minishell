
#include "../include/minish.h"

char *find_arg(char *str)
{
    int i = 0;

    while (str[i] >= 'a' && str[i] <= 'z' && str[i] != '\0') {
        i++;
    }
    if (str[i] == ' ')
        i++;
    return (cutvir(str + i));
}

int nbr_args(char *str)
{
    int i = 0;
    int e = 0;

    while (str[e]) {
        if (str[e] == ' ')
            i++;
        e++;
    }
    return (i);
}

char *el_concat(char *str, int e)
{
    int i = 0, r = 1, z = 0, p = 0;
    char *nstr = malloc(sizeof(char *) * (ft_strlen(str) + 1));
    while (str[p]){
        nstr[p] = str[p];
        p++;
    }
    while (r < e || str[i] == '\0') {
        if (str[i] == ' ' || str[i] == '\0')
            r++;
        i++;
        z++;
    }
    while (str[z] != ';' && str[z] != ' ' && str[z] != '\t' && str[z] != '\0')
        z++;
    nstr[z] = '\0';
    return (nstr+i);
}

char **el_split(char **args, char *el_arg, char *str)
{
    int i = 0, e = 0;
    args[e] = el_arg;
    e++;

    while (str[i] && str[i] != ';') {
        i++;
        if (str[i] == ' ' || str[i] == '\0' || str[i] == ';') {
            args[e] = el_concat(str, e);
            e++;
        }
    }
    args[e] = NULL;
    return (args);
}