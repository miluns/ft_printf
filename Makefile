CC=cc
CFLAGS= -Wall -Werror -Wextra -I.
.PHONY: all clean fclean re

SRCS := ft_printf.c ft_printf_utils.c \
	libft/ft_strchr.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_strlen.c

BINS := $(SRCS:%.c=%.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(BINS)
	ar -rcs $@ $^
%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	$(RM) $(BINS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
