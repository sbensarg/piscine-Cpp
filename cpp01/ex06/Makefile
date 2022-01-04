NAME = karenFilter
SRCS = main.cpp Karen.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
HEADERS = Karen.hpp
all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all