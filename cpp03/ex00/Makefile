NAME = claptrap
SRCS = ClapTrap.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = ClapTrap.hpp
CC = clang++

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all