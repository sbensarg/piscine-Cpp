NAME = ex02
SRCS = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
HEADER = Animal.hpp Cat.hpp Dog.hpp Brain.hpp
all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all