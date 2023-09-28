NAME = phonebook
SRC_FILES = PhoneBook.cpp Contact.cpp
CC = @c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address,undefined

all:		$(NAME)

$(NAME):	$(SRC_FILES)
			$(CC) $(CFLAGS) $(^) -o $(@)

clean:
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re