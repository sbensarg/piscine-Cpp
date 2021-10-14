NAME= test
SRCS= Sample.class.cpp main.cpp
FLAGS= -Wall -Wextra -Werror
CC=clang++
all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS)  $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
re: fclean all