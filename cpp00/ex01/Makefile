NAME= my_awesome_phonebook
SRCS= ClassContact.cpp ClassPhoneBook.cpp main.cpp
FLAGS= -Wall -Wextra -Werror -g
CC=clang++
all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS)  $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
re: fclean all