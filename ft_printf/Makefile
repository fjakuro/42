# include libft/Makefile

NAME = ft_printf.a
SRCS = ft_printf.c printf_csp.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus

all: $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:
	make re WITH_BONUS=1
