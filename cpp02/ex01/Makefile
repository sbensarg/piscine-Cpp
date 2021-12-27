NAME = fixed_ex01
SRCS = main.cpp Fixed.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Fixed.hpp
CC = g++

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all