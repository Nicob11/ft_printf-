NAME = libftprintf.a
INCLUDE = libftprintf.h
SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_putendl.c
OBJ = ${SRC:.c = .o}
CC = gcc
RM = rm -f
AR = ar rc
RN = ranlib
CFLAGS = -Wall -Wextra -Werror

.c .o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	@echo "compiling..."
	${AR} ${NAME} {OBJ}
	${RN} ${NAME}
	@echo "done!!!"

clean: @echo "cleaning..."
	${RM} ${OBJ}
	@echo "done!"

re: fclean all