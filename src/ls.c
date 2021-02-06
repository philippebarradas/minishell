

#include "../include/minish.h"

int len_arg(char *str)
{
    int i = 0;

    while (str[i] >= 'a' && str[i] <= 'z' && str[i] != '\0')
        i++;
    i++;
    return (i);
}

int ft_ls(char *str, char **envp)
{
    str = find_arg(str);
    char **args = malloc(sizeof(char *) * (nbr_args(str) + 3));
    args = el_split(args , "/bin/ls", str);
    pid_t parent = getpid();
    pid_t pid = fork();

    if (pid > 0)
    {
        int status;
        waitpid(pid, &status, 0);
    }
    else
        execve(args[0], args, envp);
    free(args);
    return (0);
}

int ft_rm(char *str, char **envp)
{
    if (len_arg(str) == ft_strlen(str)+1)
        return (0);
    else
        str = find_arg(str);
    char **args = malloc(sizeof(char *) * (nbr_args(str) + 3));
    args = el_split(args , "/bin/rm", str);
    pid_t parent = getpid();
    pid_t pid = fork();

    if (pid > 0)
    {
        int status;
        waitpid(pid, &status, 0);
    }
    else
        execve(args[0], args, envp);
    free(args);
    return (0);
}

int ft_date(char *str, char **envp)
{
    if (len_arg(str) == ft_strlen(str)+1)
        str = NULL;
    else
        str = find_arg(str);
    char *args[] = {"/bin/date", str, NULL};
    pid_t parent = getpid();
    pid_t pid = fork();

    if (pid > 0)
    {
        int status;
        waitpid(pid, &status, 0);
    }
    else
        execve(args[0], args, envp);
    return (0);
}