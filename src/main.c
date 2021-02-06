

#include "../include/minish.h"

void int_handler(int sig)
{
    signal(sig, SIG_IGN);
}

void el_prompt(void)
{
    ft_putstr("}$> ");
}

int main(int ac, char **av, char **envp)
{
    while (1)
    {
        el_prompt();
        signal(SIGINT, int_handler);
        gogo(ac, av, envp);
    }
    return (0);
}