NAME = libft.a
SRCS = $(shell find . -maxdepth 1 -name "*.c" ! -name "ft_lst*.c")
SRCSB = $(shell find . -maxdepth 1 -name "ft_lst*.c")
OBJS = $(SRCS:.c=.o)
OBJS_B = $(BONUS:.c=.o)
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:
	$(AR) $(NAME) $(OBJS_B)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
