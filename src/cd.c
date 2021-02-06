
#include "../include/minish.h"

char *cutvir(char *str)
{
    int e = 0;
    char *nstr = malloc(sizeof(char) * (ft_strlenvir(str) + 1));

    while (str[e] != '\0' && str[e] != ';')
    {
        nstr[e] = str[e];
        e++;
    }
    if (e > 0)
    {
        if (str[e - 1] == ' ')
            nstr[e - 1] = '\0';
        else
            nstr[e] = '\0';
    }
    return (nstr);
}

char *find_str(char *str)
{
    int i = 0, j = 0;

    while (str[j] != 'd')
        j++;
    j++;
    while (str[j] == ' ' || str[j] == '\t')
        j++;
    while (str[i] != '.' && str[i] != ';') {
        i++;
        if (str[i] == '\0' || str[i] == ';')
            return (cutvir(str+j));
    }
    return (cutvir(str + i));
}

char *ft_getenv(void)
{
    char *cwd, *result = malloc(sizeof(char) * 2000), buff[4096 + 1];
    int i = 0, e = -2, r = -3;

    cwd = getcwd(buff, 4097);
    while (cwd[i])
    {
        if (cwd[i] == '/')
            e++;
        i++;
    }
    while (e > 0)
    {
        r += 3;
        result[r] = '.';
        result[r+1] = '.';
        result[r+2] = '/';
        e--;
    }
    result[r+3] = '\0';
    return (result);
}

int ft_cd(char *str, char **envp)
{
    char *real_str;
    real_str = find_str(str);

    if (ft_strlen(real_str) == 0)
        chdir(ft_getenv());
    else
        chdir(real_str);
    return (0);
}