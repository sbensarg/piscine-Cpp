NAME = fragtrap
SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
CC = g++

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all