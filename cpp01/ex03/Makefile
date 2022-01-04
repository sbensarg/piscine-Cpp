NAME = weapon
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp
all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	@$(CC) $(FLAGS)  $(SRCS) -o $(NAME)

clean:

fclean: clean
	@rm -f $(NAME)
re: fclean all