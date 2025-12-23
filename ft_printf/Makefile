NAME = libftprintf.a

SRC_DIR = ./

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_function.c ft_functions.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all