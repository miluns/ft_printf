CC=cc
CFLAGS= -Wall -Werror -Wextra -I.
.PHONY: all clean fclean re

SRCS := src/ft_printf.c src/ft_printf_utils.c \
	libft/ft_strchr.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_strlen.c

OBJ := $(SRCS:%.c=%.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $@ $^
%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
