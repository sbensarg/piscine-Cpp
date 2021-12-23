NAME = weapon
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS)  $(SRCS) -o $(NAME)

clean:

fclean: clean
	@rm -f $(NAME)
re: fclean all