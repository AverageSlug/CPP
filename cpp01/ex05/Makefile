NAME		=	Karen

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp \
				Karen.cpp

INC			=	Karen.hpp

OBJS		= 	$(SRCS:.cpp=.o)

all :		$(NAME)

$(NAME)	: $(OBJS) $(INC)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean	:
			rm -f $(OBJS)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY = all clean fclean re