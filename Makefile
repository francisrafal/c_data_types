NAME		:= c_data_types
CC			:= cc
FLAGS		:= -Wall -Wextra -Werror
DEBUG		:=
SRCS		:= c_data_types.c
OBJS		:= ${SRCS:.c=.o}
RM	    	:= rm -f

%.o:		%.c
			${CC} ${FLAGS} ${DEBUG} -c $< -o $@

${NAME}:	${OBJS}
			@echo "Compilation of $(NAME) ..."
			${CC} ${FLAGS} ${DEBUG} ${OBJS} -o ${NAME}  
			echo "$(NAME) created"

.PHONY:		all clean fclean re

all:		${NAME}

clean:
			${RM} *.o
			@ echo "Deleting $(NAME) objects"

fclean:		clean
			${RM} ${NAME}
			@ echo "Deleting $(NAME) executable"

re:			fclean all

test:		all
			./${NAME}
