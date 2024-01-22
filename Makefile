NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC_FILES = ft_printf.c      \
			ft_source.c
OBJ_FILES = $(SRC_FILES:.c=.o)
all:	$(NAME)

$(NAME):	$(OBJ_FILES)
		ar cr $(NAME) $(OBJ_FILES)
clean:
	$(RM) $(OBJ_FILES)
fclean: clean
		$(RM) $(NAME)
re: fclean all
.PHONY: clean fclean re