

#include "../include/minish.h"

int e_found(char *str)
{
    int i = 0;

    if (ft_strcmpp(str, "unsetenv") == 0)
        return (1);
    else if (ft_strcmpp(str, "setenv") == 0)
        return (1);
    while (str[i]) {
        if (str[i] != ' ' && str[i] != '\t')
            return (0);
    }
    return (1);
}

int elcheck(char *str)
{
    if (ft_strcmpp(str, "exit") == 0)
        return (1);
    if (ft_strcmpp(str, "unsetenv") == 0)
        return (1);
    if (ft_strcmpp(str, "setenv") == 0)
        return (1);
    if (ft_strcmpp(str, "env") == 0)
        return (1);
    return (0);
}

void fonc_other(char *str)
{
    if ((str[0] == '/' || str[1] == '/') && elcheck(str) == 0)
    {
        ft_putstr(str);
        ft_putstr(": Permission denied.\n");
    }
    else if (ft_strlen(str) != 0 && elcheck(str) == 0) {
        ft_putstr(str);
        ft_putstr(": Command not found.\n");
    }
    if (ft_strcmpp(str, "clear") == 0)
        ft_putstr("\033[H\033[2J");
}

int all_fonc(char *str, char **envp)
{
    int (*allfonc[9])(char *str , char **envp) =
    {mykdir, ft_id, ft_cat, ft_echo, ft_date, ft_rm, ft_ls, ft_pwd, ft_cd};
    char *fce[10] =
    {"mkdir", "id", "cat", "echo", "date", "rm", "ls", "pwd", "cd", NULL};
    int i = 0, e = 0;

    while (fce[e] != NULL) {
        if (ft_strcmpp(str, fce[e]) == 0) {
            allfonc[e](str, envp);
            return (0);
        }
        e++;
    }
    fonc_other(str);
    return (0);
}