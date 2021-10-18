NAME		=	brainzz

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	main.cpp \
				Zombie.cpp \
				ZombieHorde.cpp

INC			=	Zombie.hpp

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