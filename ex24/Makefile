CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SOURCE = ./srcs/
HEADER = ./includes/
CFILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = ${addprefix ${SOURCE}, ${CFILES:.c=.o}}

.c.o:
	${CC} ${FLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS} && ranlib ${NAME}

all: ${NAME}

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY: ${NAME} all clean fclean re
