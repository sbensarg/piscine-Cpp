NAME = ex01
SRCS = main.cpp
FLAGS = -Wall -Wextra -Werror -Wno-unused -std=c++98 
CC = clang++
HEADER = iter.hpp
all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all