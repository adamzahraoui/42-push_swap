CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
NBONUS = checker

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m
RESET = \033[0m

define PUSH_SWAP
$(PURPLE)
 ██▓███   █    ██   ██████  ██░ ██      ██████  █     █░ ▄▄▄       ██▓███  
▓██░  ██▒ ██  ▓██▒▒██    ▒ ▓██░ ██▒   ▒██    ▒ ▓█░ █ ░█░▒████▄    ▓██░  ██▒
▓██░ ██▓▒▓██  ▒██░░ ▓██▄   ▒██▀▀██░   ░ ▓██▄   ▒█░ █ ░█ ▒██  ▀█▄  ▓██░ ██▓▒
▒██▄█▓▒ ▒▓▓█  ░██░  ▒   ██▒░▓█ ░██      ▒   ██▒░█░ █ ░█ ░██▄▄▄▄██ ▒██▄█▓▒ ▒
▒██▒ ░  ░▒▒█████▓ ▒██████▒▒░▓█▒░██▓   ▒██████▒▒░░██▒██▓  ▓█   ▓██▒▒██▒ ░  ░
▒▓▒░ ░  ░░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒   ▒ ▒▓▒ ▒ ░░ ▓░▒ ▒   ▒▒   ▓▒█░▒▓▒░ ░  ░
░▒ ░     ░░▒░ ░ ░ ░ ░▒  ░ ░ ▒ ░▒░ ░   ░ ░▒  ░ ░  ▒ ░ ░    ▒   ▒▒ ░░▒ ░     
░░        ░░░ ░ ░ ░  ░  ░   ░  ░░ ░   ░  ░  ░    ░   ░    ░   ▒   ░░       
            ░           ░   ░  ░  ░         ░      ░            ░  ░         
$(RESET)
endef
export PUSH_SWAP

SRC = mandatory/main.c \
	mandatory/check_number.c \
	mandatory/creat_stack.c \
	mandatory/ft_split.c \
	mandatory/ft_strjoin.c \
	mandatory/ops_push.c \
	mandatory/ops_rotate.c \
	mandatory/ops_rrotate.c \
	mandatory/ops_swap.c \
	mandatory/sort_big_utils.c \
	mandatory/sort_big.c \
	mandatory/sort_satck.c \
	mandatory/stack_utils.c

BSRC = bonus/main.c \
	bonus/check_number.c \
	bonus/creat_stack.c \
	bonus/ft_split.c \
	bonus/ft_strjoin.c \
	bonus/ops_push.c \
	bonus/ops_rotate.c \
	bonus/ops_rrotate.c \
	bonus/ops_swap.c \
	bonus/get_next_line.c \
	bonus/get_next_line_utils.c \
	bonus/stack_bonus.c \
	bonus/stack_utils.c \
	bonus/bonus_utils.c

OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)

all: $(NAME)
	@echo "$$PUSH_SWAP"
	@echo "$(GREEN)✨ Push_swap compiled successfully! ✨$(RESET)"
	@echo "$(YELLOW)Usage: ./push_swap [numbers]$(RESET)"

%.o: %.c mandatory/push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c bonus/push_swap_bonus.h
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BOBJ)
	@$(CC) $(CFLAGS) $(BOBJ) -o $(NBONUS)

clean:
	@rm -f $(OBJ) $(BOBJ)

fclean: clean
	@rm -f $(NAME) $(NBONUS)

re: fclean all

.PHONY: all clean fclean re