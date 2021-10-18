NAME		=	brain

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	main.cpp

OBJS		= 	$(SRCS:.cpp=.o)

all :		$(NAME)

$(NAME)	: $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean	:
			rm -f $(OBJS)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY = all clean fclean re