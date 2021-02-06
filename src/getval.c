
#include "../include/minish.h"

char *get_val(void)
{
    char *line = NULL;
    size_t size;

    if (getline(&line, &size, stdin) == -1)
        return ("exit\0");
    return (cut_str(line));
}

int ft_pwd(char *str, char **envp)
{
    char *cwd;
    char buff[4096 + 1];
    char *parsed_cwd;

    cwd = getcwd(buff, 4097);
    ft_putstr(cwd);
    ft_putchar('\n');
    return (0);
}