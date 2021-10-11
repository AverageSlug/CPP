NAME		=	phonebook

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	main.cpp \
				phonebook.cpp

INC			=	phonebook.hpp

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