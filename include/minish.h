
# ifndef MINISH_H
# define MINISH_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>


//LIBFT

int ft_putstr(char *str);

int ft_strlen(char const *str);
int ft_strlenvir(char const *str);

void ft_putchar(char c);

int ft_strcmp(char *s1, char *s2);
int ft_strcmpp(char *s1, char *s2);
int ol_strcmp(char *s1, char *s2);

void ft_putnbr(int nb);
int ft_atoi(char const *str);
char *ft_strstr(char *str, char *to_find);

//LIBFT

char *cutvir(char *str);

void gogo(int ac, char **av, char **envp);
int ft_error(int ac, char **av);
int shell_start(int ac, char **av);
char *get_val(void);
char *cut_str(char *str);
char *find_arg(char *str);
int len_arg(char *str);
int all_fonc(char *str, char **envp);

int ft_unsetenv(char *str, char * envp[]);
int ft_setenv(char *str, char * envp[]);
int ft_env(char * envp[], char *str);

int ft_pwd(char *str, char **envp);
int mykdir(char *str, char **envp);
int ft_id(char *str, char **envp);
int ft_cat(char *str, char **envp);
int ft_date(char *str, char **envp);
int ft_rm(char *str, char **envp);
int ft_cd(char *str, char **envp);
int ft_ls(char *str, char **envp);
int ft_clear(char *str, char **envp);
int ft_echo(char *str, char **envp);

char *el_concat(char *str, int e);
char **el_split(char **args, char *el_arg, char *str);
int nbr_args(char *str);
# endif
