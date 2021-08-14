NAME = testBrain

SRCS =	main.cpp \
        Animal.cpp \
        Cat.cpp \
        Dog.cpp \
        Brain.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -std=c++98 -Wall -Werror -Wextra

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
		@clang++ $(CFLAGS) -o $(NAME) $^

%.o:	%.cpp
		@clang++ $(CFLAGS) -c $< -o $@ -I.

clean:
		@$(RM) $(OBJS)

fclean:	clean
		@$(RM) $(NAME)

re:		fclean all

.PHONY: all bonus clean fclean re