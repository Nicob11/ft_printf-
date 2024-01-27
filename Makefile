NAME = libftprintf.a
INCLUDE = ft_printf.h
SRC = ft_printf.c \
	  ft_put_char.c \
	  ft_put_str.c \
	  ft_put_digit.c \
	  ft_format.c \
	  ft_put_hexa.c \
	  ft_put_pointer.c \
	  ft_put_unsigned.c 
OBJ = ${SRC:.c=.o}
CC = gcc
RM = rm -f
AR = ar rc
RN = ranlib
CFLAGS = -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	@echo "compiling..."
	${AR} ${NAME} ${OBJ}
	${RN} ${NAME}
	@echo "done!!!"

clean: 
	@echo "cleaning..."
	${RM} ${OBJ}
	@echo "done!"

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

