CC = cc
CFLAG = -Wall -Wextra -Werror
NAME = ft_ping
HEAD = header/
SRCS = src/main.c src/util.c src/sig.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)
	
.c.o :
	$(CC) $(CFLAG) -I $(HEAD) -c $< -o $@ 

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean bonus