

SRC		=	src/main.c	\
			src/minishell.c \
			src/getval.c \
			src/setenv.c \
			src/unsetenv.c \
			src/mykdir.c \
			src/cd.c \
			src/ls.c \
			src/split.c \
			src/functabarg.c \
			src/cutstr.c \
			error/error.c 	\
			lib/ft_putstr.c	\
			lib/ft_strlen.c	\
			lib/ft_putchar.c \
			lib/ft_strcmp.c	\
			lib/ft_putnbr.c \
			lib/ft_atoi.c	\
			lib/ft_strstr.c	\

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-I include

NAME	=	minishell

all	:		$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(CFLAGS) $(OBJ) -lncurses

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
