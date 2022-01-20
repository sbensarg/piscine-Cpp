NAME = ex00
SRCS = Bureaucrat.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++
HEADER = Bureaucrat.hpp
all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all