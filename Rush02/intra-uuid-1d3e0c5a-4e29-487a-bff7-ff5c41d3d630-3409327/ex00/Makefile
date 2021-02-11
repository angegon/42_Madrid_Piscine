NAME = rush-02
SRCS = main.c functions/count_char.c functions/write_numbers.c functions/ft_get_value.c functions/errors.c functions/ft_atoi.c functions/ft_create_key_value.c functions/ft_strcpy.c functions/ft_strlen.c functions/ft_trim.c functions/open_file.c functions/ft_split.c functions/ft_strncpy.c functions/ft_putstr.c functions/ft_strcmp.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
CC = cc

all:	$(OBJ)
		cc $(FLAGS) -o $(NAME) $(OBJ)
debug:	$(OBJ)
		cc $(FLAGS) -g -o $(NAME) $(OBJ)
clean:
		$(CLEAN) $(NAME)
fclean:	clean
		$(CLEAN) $(OBJ)
norma:
		norminette -R CheckForbiddenSourceHeader