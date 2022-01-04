NAME = zombie
SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
HEADERS = Zombie.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	@$(CC) $(FLAGS)  $(SRCS) -o $(NAME)

clean:

fclean: clean
	@rm -f $(NAME)
re: fclean all