NAME		= libft.a

SRCS		= ft_strlen.c \
				ft_strchr.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_bzero.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_memset.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memcmp.c \
				ft_memchr.c \
				ft_strdup.c \
				ft_calloc.c \
				ft_strnstr.c\
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c 

BNS_SRCS	= ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS		= $(SRCS:%.c=%.o)
BNS_OBJS	= $(BNS_SRCS:%.c=%.o)
FLAGS		= -Wall -Werror -Wextra
BOLD_YELLOW	=	\033[1;33m
BOLD_GREEN  =	\033[0;32m
NO_COLOR	=	\033[0m

$(NAME):
	@gcc $(FLAGS) -c $(SRCS) -I ./
	@echo "📟 Libft $(BOLD_GREEN)complied$(NO_COLOR)!"
	@ar rc $(NAME) $(OBJS)
	@echo "📟 Libft $(BOLD_GREEN)archived$(NO_COLOR)!"

all: $(NAME)

bonus:
	@gcc $(FLAGS) -c $(BNS_SRCS) -I ./
	@ar rc $(NAME) $(BNS_OBJS)

clean:
	@rm -f $(OBJS) $(BNS_OBJS)
	@echo "🧼 $(BOLD_YELLOW)Libft Clean: $(NO_COLOR)Removed object files"

fclean: clean
	@rm -f $(NAME)
	@echo "🧼 $(BOLD_YELLOW)Libft Clean: $(NO_COLOR)Removed all!"

re: fclean all

.PHONY: all bonus clean fclean re