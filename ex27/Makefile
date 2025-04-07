CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SOURCE = ./srcs/
HEADER = ./includes/
CFILES = display_file.c display_file_utils.c

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -I ${HEADER} ${addprefix ${SOURCE}, ${CFILES}} -o ${NAME}

all: ${NAME}

clean:
	echo "it's all very clean"

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY: ${NAME} all clean fclean re
