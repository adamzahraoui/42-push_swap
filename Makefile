CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

SRC = main.c \
	creat_stack.c \
	check_number.c \
	ft_split.c \
	ft_strjoin.c \
	ops_push.c \
	ops_rrotate.c \
	ops_rotate.c \
	ops_swap.c \
	sort_small.c \
	stack_utils.c \
	sort_big.c \
	stack_utils_big.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re