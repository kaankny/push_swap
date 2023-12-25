NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./libft
LIBFTA = ./libft/libft.a
SRC = src/ft_check.c src/ft_error.c src/ft_init_stacks.c src/rule_a.c src/rule_b.c src/rule_c.c src/sort_list.c src/sort_list2.c src/utils.c
OBJ = $(SRC:.c=.o)
BOLD_YELLOW	=	\033[1;33m
BOLD_GREEN  =	\033[0;32m
NO_COLOR	=	\033[0m
all: $(NAME)

$(NAME): $(OBJ)
	@echo "🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Starting the compilation..."
	@make -C $(LIBFT)
	@cc $(CFLAGS) src/push_swap.c $(OBJ) $(LIBFTA) -o $(NAME)
	@echo "📟 Push_Swap $(BOLD_GREEN)ready$(NO_COLOR)!"

clean:
	@make clean -C $(LIBFT)
	@rm -rf $(OBJ)
	@echo "🧼 $(BOLD_YELLOW)Push_Swap Clean: $(NO_COLOR)Removed object files"

fclean: clean
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)
	@echo "🧼 $(BOLD_YELLOW)Push_Swap Clean: $(NO_COLOR)Removed all!"

re: fclean all

.PHONY: all clean fclean re