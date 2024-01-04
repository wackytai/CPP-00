NAME = account
SOURCES = Account.cpp tests.cpp
CC = @c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address,undefined

all:		$(NAME)
$(NAME):	$(SOURCES)
			$(CC) $(CCFLAGS) $(^) -o $(@)

clean:
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re