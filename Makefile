NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

MANDATORY_SRC = ft_printf.c print_percent.c print_char.c \
		print_int_dec.c print_pointer.c print_string.c print_xuplo_16.c \
		ft_putchar_fd.c print_unsigned.c

SRC = $(MANDATORY_SRC)
OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re