NAME = replace
SRCS = main.cpp
FLAGS = -Wall -Wextra -Werror
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