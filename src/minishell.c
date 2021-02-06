
#include "../include/minish.h"

char **split_arg(char *str)
{
    int i = 0, y = 0, x = 0, e = 0;
    char **allstr = malloc(sizeof(char *) * (2 +1));

    while (e < 3) {
        allstr[e] = malloc(sizeof(char) * (10 + 1));
        e++;
    }

    return (allstr);
}

int nbr_vir(char *str)
{
    int i = 0, e = 0;

    while (str[i]) {
        if (str[i] == ';')
            e++;
        i++;
    }
    return (e);
}

void foncvir(char *str, char **envp)
{
    if (ft_strcmpp(str, "exit") == 0)
    {
        ft_putstr("exit\n");
            exit(0);
    }
    if (ft_strcmpp(str, "unsetenv") == 0)
        ft_unsetenv(str, envp);
    if (ft_strcmpp(str, "setenv") == 0)
        ft_setenv(str, envp);
    if (ft_strcmpp(str, "env") == 0)
        ft_env(envp, str);
    all_fonc(str, envp);
}

void gogo(int ac, char **av, char **envp)
{
    char *str = get_val();
    int i = 0, j = 0, valindex = -1, r = 0, a = nbr_vir(str);

    if (str[ft_strlen(str) - 1] == ' ' || str[ft_strlen(str) - 1] == '\t')
        str[ft_strlen(str) - 1] = '\0';
    while (str[i])
    {
        if (str[i] == ';') {
            foncvir(str + i + 1, envp);
        }
        else if (i == 0) {
            foncvir(str , envp);
        }
        i++;
    }
}