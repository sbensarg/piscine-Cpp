NAME = karen
SRCS = main.cpp Karen.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
CCLINUX = g++
all: $(NAME)

$(NAME):
	@$(CCLINUX) $(FLAGS)  $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
re: fclean all