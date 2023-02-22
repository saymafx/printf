NAME = libftprintf.a

GCC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar

RC = -rcs

SRC = ft_printf.c ft_putnbr.c ft_strchr.c ft_strlen.c ft_putunbr.c ft_putunbr_base.c ft_putstr.c ft_putptr.c ft_isspace.c ft_putchar.c

OBJ = ${SRC:.c=.o}

$(NAME): $(OBJ)
	$(AR) ${RC} $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean:clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus