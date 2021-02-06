
#include "../include/minish.h"

int ft_unsetenv(char *str, char * envp[])
{
    int j = -1, i = 0;

    while (str[j++] != 'v')
        j++;
    while (str[j] == ' ' || str[j] == '\t')
        j++;
    while (envp[i] != NULL)
    {
        if (ft_strcmpp(str+j, envp[i]) == 0){
            while (envp[i] != NULL)
            {
                envp[i] = envp[i+1];
                i++;
            }
            return (0);
        }
        i++;
    }
    return (0);
}

int ft_env(char * envp[], char *str)
{
    int i = 0;
    while (envp[i] != NULL)
    {
        ft_putstr(envp[i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
}