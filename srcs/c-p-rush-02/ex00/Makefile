SRCS		= ${wildcard ./src/*.c}

INCLD		= include

OBJS		= ${SRCS:.c=.o}

NAME		= rush-02

CC		= gcc

RM		= rm -f

CFLAGS		= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLD}

${NAME}:	${OBJS}
		${CC} -o $@ $^

all:		${NAME} clean

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re

